// https://oj.leetcode.com/problems/remove-duplicates-from-sorted-array-ii/


class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n<=1) return n;
        int i=1,j=1;
        int val=A[0],cnt=1;
        for(int i=1;i<n;i++)
        {
            if(A[i]==val) cnt++;
            else cnt=1,val=A[i];
            if(cnt<=2) A[j]=A[i],j++;
        }
        return j;
    }
};
