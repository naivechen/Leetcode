// https://oj.leetcode.com/problems/jump-game/


class Solution {
public:
    bool canJump(int A[], int n) {
        int pos=0;
        for(int i=0;i<n && i<=pos;i++)
        {
            if(A[i]+i>pos) pos=A[i]+i;
        }
        if(pos>=n-1) return true;
        return false;
    }
};
