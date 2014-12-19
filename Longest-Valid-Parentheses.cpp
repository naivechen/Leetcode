// https://oj.leetcode.com/problems/longest-valid-parentheses/


class Solution {
public:
    int longestValidParentheses(string s) {
        bool *a = new bool[s.length()];
        memset(a, false, s.length());
        stack<int> st;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')' && !st.empty()) {
                a[i] = true;
                a[st.top()] = true;
                st.pop();
            }
        }
        int max_len = 0, cur_len = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (a[i]) ++cur_len;
            else cur_len = 0;
            max_len = max(max_len, cur_len);
        }
        return max_len;
    }
};
