// https://oj.leetcode.com/problems/single-number-ii/


class Solution {
public:
    int singleNumber(int A[], int n) {
        int a=0,b=0;
	    for(int i=0;i<n;i++)
	    {
		    int x=A[i];
		    b=b^(x&~a);
		    a=a^(x&~b);
	    }
	    return b&~a;
    }
};
