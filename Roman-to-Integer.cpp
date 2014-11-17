// https://oj.leetcode.com/problems/roman-to-integer/


class Solution {
public:
    int romanToInt(string s) {
        int len=s.length();
        if(!len) return 0;
        map<char,int> ma;
        ma['I'] = 1;  
        ma['V'] = 5;  
        ma['X'] = 10;  
        ma['L'] = 50;  
        ma['C'] = 100;  
        ma['D'] = 500;  
        ma['M'] = 1000; 
        int sum=0,i=len;
        while(i)
        {
            if(ma[s[i]]>ma[s[i-1]])
                sum-=ma[s[i-1]];
            else sum+=ma[s[i-1]];
            i--;
        }
        return sum;
    }
};

