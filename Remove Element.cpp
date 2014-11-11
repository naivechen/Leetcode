// https://oj.leetcode.com/problems/remove-element/

class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int ans = 0;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(A[i]!=elem) 
            {
                v.push_back(A[i]);
                ans++;
            }
        }
        for(int i=0;i<v.size();i++)
            A[i]=v[i];
        return ans;
    }
};
