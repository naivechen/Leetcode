// https://oj.leetcode.com/problems/plus-one/


class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int flag=-1;
        int len=digits.size()-1;
        if(digits[len]!=9)
        {
            digits[len]++;
            return digits;
        }
        digits[len]=0;
        flag=1; // carry
        for(int i=len-1;i>=0;i--)
        {
            if(digits[i]==9)
            {
                if(flag) digits[i]=0,flag=1;
                else 
                {
                    break;
                }
            }
            else 
            {
                if(flag) digits[i]++;
                flag=0;
                break;
            }
        }
        vector<int> ans;
        if(flag)
        {
            ans.push_back(1);
            for(int i=0;i<digits.size();i++)
                ans.push_back(digits[i]);
            return ans;
        }
        return digits;
    }
};

