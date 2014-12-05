// https://oj.leetcode.com/problems/jump-game-ii/


class Solution {
public:
    int jump(int A[], int n) {
        if(!n) return INT_MAX;
        int maxstep=0,curstep=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(curstep<i)
            {
                ans++;
                curstep=maxstep;
            }
            maxstep=max(maxstep,A[i]+i);
        }
        return ans;
    }
};
