// https://oj.leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        int len=s.length(),flag=1;
        if(len%2) return false;
        if(!len) return true;
        for(int i=1;i<len;i++)
        {
            if(s[i-1]=='(' && s[i]==')')
            {
                string tmp=s.substr(0,i-1)+s.substr(i+1);
                return isValid(tmp);
            }
            if(s[i-1]=='[' && s[i]==']')
            {
                string tmp=s.substr(0,i-1)+s.substr(i+1);
                return isValid(tmp);
            }
            if(s[i-1]=='{' && s[i]=='}')
            {
                string tmp=s.substr(0,i-1)+s.substr(i+1);
                return isValid(tmp);
            }
        }
        return false;
    }
};
