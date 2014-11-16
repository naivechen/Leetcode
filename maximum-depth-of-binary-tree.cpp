// https://oj.leetcode.com/problems/maximum-depth-of-binary-tree/


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
    int dfs(TreeNode *root, int sum)
    {
        if(root->left==NULL && root->right==NULL) return sum;
        int left=-1,right=-1;
        if(root->left!=NULL) left=dfs(root->left,sum+1);
        if(root->right!=NULL) right=dfs(root->right,sum+1);
        return max(left,right);
    }
    int maxDepth(TreeNode *root) {
        if(root==NULL) return 0;
        return dfs(root,1);
    }
};
