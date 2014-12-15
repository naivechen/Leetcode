// https://oj.leetcode.com/problems/word-search/


class Solution {
public:
    bool mask[200][200];
    bool exist(vector<vector<char> > &board, string word) {
    int n = board[0].size();
    int m = board.size();
    for(int i = 0;i< m;i++)
        for(int j = 0;j<n;j++)
        mask[i][j] = true;
    for(int i = 0;i<m;i++)
        for(int j = 0;j< n;j++)
        {
            if(word[0] == board[i][j])
            {
                if(dfs(word,board,i,j,0))
                    return true;
        
            }
            }
    return false;
    }

    bool dfs(string &word, vector<vector<char>> &board,int i, int j,int cur)
    {
        if(cur == word.length())
            return true;
        if(i < 0 || j<0||i>=board.size()||j>=board[0].size())
            return false;
        if(mask[i][j] == false)
            return false;
        bool flag = false;
        if(word[cur] == board[i][j])
        { 
            mask[i][j] = false;
            flag = dfs(word,board,i-1,j,cur+1);
            if(flag) return true;
            flag = dfs(word,board,i+1,j,cur+1);
            if(flag) return true;
            flag = dfs(word,board,i,j-1,cur+1);
            if(flag) return true;
            flag = dfs(word,board,i,j+1,cur+1);
            if(flag) return true;
            mask[i][j] = true;
        }
        return flag;
    }

};
