// https://oj.leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        const int max = 0x7fffffff;  
        const int min = 0x80000000; 
        long long sum = 0; 
        while(x != 0)
        {
            int temp = x % 10;
            sum = sum * 10 + temp;
            if (sum > max || sum < min)  
            {
                sum = 0;
                return sum;
            }
            x = x / 10;
        }
        return sum;
    }
};
