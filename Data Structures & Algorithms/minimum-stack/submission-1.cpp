class MinStack {
public:
    stack<int> stk;
    stack<int> minElement;
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        if(minElement.empty())
        {
            minElement.push(val);
        }
        else
        {
            if(minElement.top()>=val)
            {
                minElement.push(val);
            }
        }
    }
    
    void pop() {
        int ele=stk.top();
       stk.pop();
       if(minElement.top()==ele)
       {
         minElement.pop();
       } 
    }
    
    int top() {
        if(stk.empty())
        return -1;
        return stk.top();
    }
    
    int getMin() {
        if(minElement.empty())
        return -1;
        return minElement.top();
    }
};
