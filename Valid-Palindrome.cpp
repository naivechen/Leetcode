// https://oj.leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        bool flag=true;
        if(s=="") return flag;
        string str="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z') str+=s[i];
            if(s[i]>='A' && s[i]<='Z') str+=char(s[i]+32);
            if(s[i]>='0' && s[i]<='9') str+=s[i];
        }
        string tmp=str;
        reverse(tmp.begin(),tmp.end());
        if(str!=tmp) flag=false;
        return flag;
    }
};
