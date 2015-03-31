// https://leetcode.com/problems/number-of-1-bits/


class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while(n!=0)
        {
            if(n & 1) ans++;
            n/=2;
        }
        return ans;
    }
};


// more fast code
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while(n!=0)
        {
            ans++;
            n=n&(n-1);
        }
        return ans;
    }
};
