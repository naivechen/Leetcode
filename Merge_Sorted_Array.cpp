// https://oj.leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int i = 0;
        int j = 0;
        int *C = (int *)malloc(sizeof(int)*(n+m)); 
        int num=0;
        while(i<m && j<n)
        {
            if(A[i]<=B[j])
                C[num++]=A[i],i++;
            else C[num++]=B[j],j++;
        }
        while(i<m)
            C[num++]=A[i],i++;
        while(j<n)
            C[num++]=B[j],j++;
        for(int i=0;i<num;i++)
            A[i]=C[i];
        free(C);
    }
};
