// https://oj.leetcode.com/problems/spiral-matrix/


class Solution {
private:
    int step[4][2];
    vector<int> ret;
    bool canUse[100][100];
public:
    void dfs(vector<vector<int> > &matrix, int direct, int x, int y)
    {
        for(int i = 0; i < 4; i++)
        {
            int j = (direct + i) % 4;
            int tx = x + step[j][0];
            int ty = y + step[j][1];
            if (0 <= tx && tx < matrix.size() && 0 <= ty && ty < matrix[0].size() && canUse[tx][ty])
            {
                canUse[tx][ty] = false;
                ret.push_back(matrix[tx][ty]);                
                dfs(matrix, j, tx, ty);               
            }            
        }
    }
    
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        step[0][0] = 0;
        step[0][1] = 1;
        step[1][0] = 1;
        step[1][1] = 0;
        step[2][0] = 0;
        step[2][1] = -1;
        step[3][0] = -1;
        step[3][1] = 0;
        ret.clear();
        memset(canUse, true, sizeof(canUse));
        dfs(matrix, 0, 0, -1);
        
        return ret;
    }
};
