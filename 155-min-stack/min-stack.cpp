class MinStack {
public:
    stack<int>st;
    stack<int>Minst;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(Minst.empty())
            Minst.push(val);
        else
            Minst.push(min(val,Minst.top()));
    }
    
    void pop() {
        if(!st.empty())
        {
            st.pop();
            Minst.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return Minst.top();
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