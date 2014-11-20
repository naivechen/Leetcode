// https://oj.leetcode.com/problems/permutations/


class Solution {
private:
    vector<vector<int> > ans;
    int vis[100],data[100];
public:
    void dfs(vector<int> &num, int index,int len)
    {
        if(index==len)
        {
            vector<int> tmp;
            for(int i=0;i<len;i++)
                tmp.push_back(num[data[i]]);
            ans.push_back(tmp);
        }
        for(int i=0;i<len;i++)
        {
            if(!vis[i])
            {
                vis[i]=1;
                data[index]=i;
                dfs(num,index+1,len);
                vis[i]=0;
            }
            
        }
    }
    vector<vector<int> > permute(vector<int> &num) {
        ans.clear();
        int len=num.size();
        dfs(num,0,len);
        return ans;
    }
};

