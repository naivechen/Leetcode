// https://oj.leetcode.com/problems/subsets/


class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        sort(S.begin(), S.end());
        vector<vector<int> > sets(1, vector<int>());
        for(int i = 0; i < S.size(); ++i)
        {
            int oldEnd = sets.size();
            for(int j = 0; j < oldEnd; ++j)
            {
                vector<int> tmp = sets[j];
                tmp.push_back(S[i]);
                sets.push_back(tmp);
            }
        }
        return sets;
    }
};
