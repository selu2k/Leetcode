stack<pair<int,int>> stck;
class MinStack {
public:
    MinStack() {
        stck = stack<pair<int,int>>();
    }
    
    void push(int val) {
        stck.push({val,min(val,(!stck.empty())? stck.top().second:val)});
    }
    
    void pop() {
        stck.pop();
    }
    
    int top() {
        return stck.top().first; 
    }
    
    int getMin() {
        return stck.top().second;
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