// https://oj.leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        vector<int> v;
        int ans=0,pre;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                pre=A[i];
                ans++;
                v.push_back(A[i]);
            }
            else if(A[i]!=pre) 
            {
                pre=A[i];
                ans++;
                v.push_back(A[i]);
            }
        }
        for(int i=0;i<v.size();i++)
            A[i]=v[i];
        return ans;
    }
};
