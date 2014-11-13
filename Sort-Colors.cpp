// https://oj.leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(int A[], int n) {
        int red=0,white=0,blue=0;
        for(int i=0;i<n;i++)
        {
            if(A[i]==0) red++;
            if(A[i]==1) white++;
            if(A[i]==2) blue++;
        }
        for(int i=0;i<n;i++)
        {
            if(red) A[i]=0,red--;
            else if(white) A[i]=1,white--;
            else if(blue) A[i]=2,blue--;
        }
    }
};
