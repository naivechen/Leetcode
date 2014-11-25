// https://oj.leetcode.com/problems/powx-n/


class Solution {
public:
    double pow(double x, int n) {
        if(n<0)
		{
			if(n==INT_MIN)
				return 1.0 / (pow(x,INT_MAX)*x);
			else
				return 1.0 / pow(x,-n);
		}
        if(n==0)
            return 1.0;
		double ans = 1.0 ;
		for(;n>0; x *= x, n>>=1)
		{
			if(n&1>0)
				ans *= x;
		}
		return ans;
    }
};
