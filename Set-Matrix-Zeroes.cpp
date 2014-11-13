// https://oj.leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        int n=matrix.size(),m=matrix[0].size();
        bool row0 = false, col0 = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if ((i == 0 || j == 0) && matrix[i][j] == 0) {
                    row0 |= i == 0;
                    col0 |= j == 0;
                }
                else {
                    matrix[i][0] = matrix[i][j] == 0 ? 0 : matrix[i][0];
                    matrix[0][j] = matrix[i][j] == 0 ? 0 : matrix[0][j];                                        
                }
            }
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                matrix[i][j] = matrix[i][0] == 0 || matrix[0][j] == 0 ? 0 : matrix[i][j];
            }
        }
        
        for (int i = 0; i < n && col0; i++) {
            matrix[i][0] = 0;
        }
        for (int j = 0; j < m && row0; j++) {
            matrix[0][j] = 0;
        }

    }
};

