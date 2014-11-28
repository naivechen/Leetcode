// https://oj.leetcode.com/problems/palindrome-number/


class Solution {
public:
    bool isPalindrome(int x) {
        int flag=x/10;
        if(x<0) return false;
        if(flag==0) return true;
        string str="";
        while(x)
        {
            int tmp=x%10;
            str+=char(tmp+'0');
            x/=10;
        }
        string s=str;
        reverse(s.begin(),s.end());
        if(str==s) return true;
        return false;
    }
};
