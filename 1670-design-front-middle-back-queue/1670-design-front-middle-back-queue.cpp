class FrontMiddleBackQueue {
public:
    deque<int> left,right;
    FrontMiddleBackQueue() {
    }
    void balanceOut(){

        if(left.size() > right.size() + 1){
            int temp = left.back();
            left.pop_back();
            right.push_front(temp);
        }

        if(right.size() > left.size()){
            int temp = right.front();
            right.pop_front();
            left.push_back(temp);
        }
    }
    void pushFront(int val) {
        left.push_front(val);
        balanceOut();
    }
    
    void pushMiddle(int val) {
        if(left.size() == right.size()){
            left.push_back(val);
        }
        else{
            int temp = left.back();
            left.pop_back();
            right.push_front(temp);
            
            left.push_back(val);
        }
    }
    
    void pushBack(int val) {
        right.push_back(val);
        balanceOut();
    }
    
    int popFront() {
        if(left.empty()){
            return -1;
        }
        int temp = left.front();
        left.pop_front();
        balanceOut();
        return temp;
    }
    
    int popMiddle() {
        if(left.empty())    return -1;
        int temp = left.back();
        left.pop_back();
        balanceOut();
        return temp;

    }
    
    int popBack() {
        if(left.empty() && right.empty()) {
            return -1;
        }
        int temp ;
        if(right.empty()){
            temp = left.back();
            left.pop_back();
        }
        else{
            temp = right.back();
            right.pop_back();
        }
        balanceOut();
        return temp;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */