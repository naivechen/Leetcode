// https://oj.leetcode.com/problems/min-stack/

class MinStack {
private:
    stack<int> st;
    stack<int> minst;
public:
    void push(int x) {
        st.push(x);
        if(minst.empty() || minst.top()>=x)
            minst.push(x);
    }

    void pop() {
        if(st.top()==minst.top())
            minst.pop();
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minst.top();
    }
};
