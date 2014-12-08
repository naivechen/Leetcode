// https://oj.leetcode.com/problems/find-peak-element/


class Solution {
public:
    int findPeakElement(const vector<int> &num) {
        int len=num.size();
        if(len==1) return 0;
        for(int i=0;i<len;i++)
        {
            if(i==0) 
            {
                if(num[i]>num[i+1])
                    return i;
            }
            else if(i==(len-1))
            {
                if(num[i]>num[i-1]) 
                    return i;
            }
            else 
            {
                if(num[i]>num[i-1] && num[i]>num[i+1])
                    return i;
            }
        }
    }
};
