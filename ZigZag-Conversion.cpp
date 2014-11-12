// https://oj.leetcode.com/problems/zigzag-conversion/

class Solution {
public:
    string convert(string s, int nRows) {
        string ans;
        if(nRows==1) return s;
        for(int i=0;i<nRows;i++)
        {
            int j=i;
            bool flag=true;
            while(j<s.size())
            {
                ans.push_back(s[j]);
                if(i==0 || i == nRows-1)
                    j+=2*(nRows-1);
                else
                {
                    if(flag)
                    {
                        j+=2*(nRows-1-i);
                        flag=false;
                    }
                    else 
                    {
                        j+=2*i;
                        flag=true;
                    }
                }
            }
        }
        return ans;
    }
};

