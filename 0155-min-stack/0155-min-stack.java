class MinStack {
    Stack<Long> st ;
    Long mini ;
    public MinStack() {
        st = new Stack<Long>() ;
        mini = Long.MAX_VALUE ;
    }
    
    public void push(int value) {
        Long val = Long.valueOf(value);
        if(st.isEmpty()){
            mini = val ;
            st.push(val) ;
        }    
        else{
            if(mini < val) {
                st.push(val);
            }    
            else{
                st.push(2*val - mini) ;
                mini = val ;
            }    
        }

    }
    
    public void pop() {
        long x = st.peek() ;
        st.pop() ;
        if(x<mini)  mini = 2*mini - x ;
    }
    
    public int top() {
        long x = st.peek() ;
        if (x < mini) {
            return mini.intValue();
        }
        return (int)x  ;
    }
    
    public int getMin() {
        
        return mini.intValue() ;
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */