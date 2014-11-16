// https://oj.leetcode.com/problems/length-of-last-word/


class Solution {
public:
    int lengthOfLastWord(const char *s) {
        string str;
        istringstream sin(s);
        while(sin>>str);
        if(str=="" || str==" ") return 0;
        return str.length();
    }
};
