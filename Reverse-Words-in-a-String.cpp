// https://oj.leetcode.com/problems/reverse-words-in-a-string/

class Solution {
public:
    void reverseWords(string &s) {
        int len=s.length(), i;
        string str;
        for(i=s.length()-1;i>=0;i--)
        {
            while(i>=0 && s[i]==' ') i--;
            if(i<0) break;
            if(!str.empty()) str.push_back(' ');
            string t;
            while(i>=0 && s[i]!=' ') t.push_back(s[i--]);
            reverse(t.begin(),t.end());
            str.append(t);
        }
        s=str;
    }
};

