class MinStack {
    std::stack<int> a_stack;
    std::stack<int> min_stack;
public:
    MinStack() {
    }
    
    void push(int val) {
        if(!a_stack.empty()){
            min_stack.push(std::min(min_stack.top(), val));
            a_stack.push(val);
        }else{
            a_stack.push(val);
            min_stack.push(val);
        }
    }
    
    void pop() {
        a_stack.pop();
        min_stack.pop();
    }
    
    int top() {
        return a_stack.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};
