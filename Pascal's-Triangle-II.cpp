// https://oj.leetcode.com/problems/pascals-triangle-ii/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans,pre;
        for(int i=0;i<=rowIndex;i++)
        {
            pre.clear();
            if(i==0) pre.push_back(1);
            else 
            {
                for(int j=0;j<=i;j++)
                {
                    if(j==0 || j==i) pre.push_back(1);
                    else pre.push_back(ans[j-1]+ans[j]);
                }
            }
            ans.clear();
            for(int j=0;j<pre.size();j++)
                ans.push_back(pre[j]);
        }
        return ans;
    }
};
