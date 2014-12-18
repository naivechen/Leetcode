// https://oj.leetcode.com/problems/largest-rectangle-in-histogram/


class Solution {
public:
    int largestRectangleArea(vector<int> &height) {
        int len=height.size();
        if(!len) return 0;
        vector<int> tmp=height;
        tmp.push_back(0);
        stack<int> s;
        int ans=0;
        for(int i=0;i<tmp.size();i++)
        {
            if(s.empty() || (!s.empty() && tmp[i]>=tmp[s.top()])) s.push(i); 
            else 
            {
                while(!s.empty() && tmp[s.top()]>tmp[i])
                {
                    int idx=s.top();
                    s.pop();
                    int width=s.empty() ? i : (i-s.top()-1);
                    ans=max(ans,tmp[idx]*width);
                }
                s.push(i);
            }
        }
        return ans;
    }
};
