// https://oj.leetcode.com/problems/path-sum/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool dfs(TreeNode *root, int sum, int cursum)
    {
        if(root == NULL) return false;
        if(root->left == NULL && root->right == NULL)
            return (cursum+root->val) == sum;
        bool flagleft,flagright;
        flagleft = dfs(root->left,sum,cursum+root->val);
        flagright = dfs(root->right,sum,cursum+root->val);
        return flagleft || flagright;
    }
    bool hasPathSum(TreeNode *root, int sum) {
        return dfs(root,sum,0);
    }
};
