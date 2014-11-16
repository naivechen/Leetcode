// https://oj.leetcode.com/problems/search-in-rotated-sorted-array-ii/


class Solution {
public:
    bool search(int A[], int n, int target) {
        for(int i=0;i<n;i++)
            if(A[i]==target) return true;
        return false;
    }
};

