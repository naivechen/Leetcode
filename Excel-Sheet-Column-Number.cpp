// https://oj.leetcode.com/problems/excel-sheet-column-number/


class Solution {
public:
    int titleToNumber(string s) {
       
        int n=s.length();
        int result=0;
        for(int i=0;i<n;i++)
        {
            int num=s[i]-'A'+1;
            result=result*26+num;
        }
       
        return result;
    }
};
