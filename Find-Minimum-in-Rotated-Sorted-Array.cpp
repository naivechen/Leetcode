// https://oj.leetcode.com/problems/find-minimum-in-rotated-sorted-array/

class Solution {
public:
    int findMin(vector<int> &num) {
        int ans=0x7fffffff;
        for(int i=0;i<num.size();i++)
            ans=min(ans,num[i]);
        return ans;
    }
};
