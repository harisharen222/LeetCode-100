class MinStack {
public:
    stack<int> mainStack;
    stack<int> minStack;
    MinStack() {
        
    }
    
    void push(int val) {
        mainStack.push(val);
        if(minStack.empty()){
            minStack.push(val);
        }
        else{
            int mini = min(val,minStack.top());
            minStack.push(mini);
        }
    }
    
    void pop() {
        minStack.pop();
        mainStack.pop();
    }
    
    int top() {
        int topElement = mainStack.top();

        return topElement;
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */