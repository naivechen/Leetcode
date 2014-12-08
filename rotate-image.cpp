// https://oj.leetcode.com/problems/rotate-image/


class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        int n = matrix.size();
        vector<vector<int> > tmp(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                tmp[i][j] = matrix[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < matrix[0].size(); ++j) {
                matrix[j][n - 1 - i] = tmp[i][j];
            }
        }
    }
};
