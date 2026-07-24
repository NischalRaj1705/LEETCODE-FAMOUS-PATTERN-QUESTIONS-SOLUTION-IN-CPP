class MinStack {
    stack<int> st;
    stack<int> minstack;

public:
    MinStack() {}

    void push(int value) {
        st.push(value);
        if (minstack.empty()||minstack.top() >= value ) {
            minstack.push(value);
        }
    }

    void pop() {
        int temp = st.top();
        st.pop();
        if (temp == minstack.top()) {
            minstack.pop();
        }
    }

    int top() { return st.top(); }

    int getMin() { return minstack.top(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */