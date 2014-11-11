// https://oj.leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > ans;
        vector<int> v;
        ans.clear();
        for(int i=0;i<numRows;i++)
        {
            v.clear();
            if(i==0) v.push_back(1);
            else 
                for(int j=0;j<=i;j++)
                {
                    if(j==0 || j==i) v.push_back(1);
                    else 
                    {
                        int tmp=ans[i-1][j]+ans[i-1][j-1];
                        v.push_back(tmp);   
                    }
                }
            ans.push_back(v);
        }
        return ans;
    }
};
