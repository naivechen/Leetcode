// https://oj.leetcode.com/problems/median-of-two-sorted-arrays/
// better method -> http://blog.csdn.net/zxzxy1988/article/details/8587244


class Solution {
public:
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        int *a = new int[n+m];
        int j=0;
        for(int i=0;i<m;i++,j++)
            a[j]=A[i];
        for(int i=0;i<n;i++,j++)
            a[j]=B[i];
        sort(a,a+n+m);
        double ans;
        if((m+n)%2) ans=(double)a[(n+m)/2];
        else ans=(double)(a[(n+m)/2]+a[(n+m)/2-1])/2.0;
        return ans;
    }
};
