// https://oj.leetcode.com/problems/maximum-gap/


class Solution {
public:
    int maximumGap(vector<int> &num) {
        if(num.empty() || num.size() < 2)
            return 0;
        sort(num.begin(), num.end());
        int maxGap = num[1]-num[0];
        for(int i = 2; i < num.size(); i ++)
        {
            int curGap = num[i]-num[i-1];
            maxGap = (maxGap>=curGap)?maxGap:curGap;
        }
        return maxGap;
    }
};
