// https://oj.leetcode.com/problems/search-for-a-range/


class Solution {
private:
    vector<int> ans;
public:
    int small_binary_search(int A[], int n, int target)
    {
        int le=0,ri=n-1,mid;
        while(le<=ri)
        {
            mid=(ri+le)/2;
            if(A[mid]>=target) ri=mid-1;
            else le=mid+1;
        }
        if(le<n && A[le]==target) return le;
        else return -1;
    }
    int big_binary_search(int A[], int n, int target)
    {
        int le=0,ri=n-1,mid;
        while(le<=ri)
        {
            mid=(le+ri)/2;
            if(A[mid]<=target) le=mid+1;
            else ri=mid-1;
        }
        if(ri>=0 && A[ri]==target) return ri;
        else return -1;
    }
    vector<int> searchRange(int A[], int n, int target) {
        ans.push_back(small_binary_search(A, n, target));
        ans.push_back(big_binary_search(A, n, target));
        return ans;
    }
};
