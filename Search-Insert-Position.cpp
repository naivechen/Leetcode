// https://oj.leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        int le=0,ri=n-1,mid,flag=1;
        while(le<=ri)
        {
            mid=(le+ri)/2;
            if(A[mid]==target) {flag=0;break;}
            else if(A[mid]<target) le=mid+1;
            else ri=mid-1;
        }
        if(flag) mid=le;
        return mid;
    }
};
