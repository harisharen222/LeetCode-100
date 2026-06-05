class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

class MyCircularQueue {
public:
    Node* front;
    Node* rear;
    int size;
    int capacity;
    MyCircularQueue(int k) {
        size = 0;
        capacity = k;
        front = nullptr;
        rear = nullptr;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }

        Node* newNode = new Node(value);

        if(front == nullptr){
            front = rear = newNode;
        }
        else{
            rear->next = newNode;
            rear = newNode;
        }
        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        if(front == rear){
            delete front;
            front = rear = nullptr;
        }
        else{
            Node* temp = front;
            front = front->next;
            delete temp;
        }
        size--;
        return true;
    }
    
    int Front() {
        if(size == 0){
            return -1;
        }
        return front->data;
    }
    
    int Rear() {
        if(size == 0){
            return -1;
        }
        return rear->data;
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */