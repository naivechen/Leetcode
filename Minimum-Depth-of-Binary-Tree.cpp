// https://oj.leetcode.com/problems/minimum-depth-of-binary-tree/

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
    int dfs(TreeNode *root,int depth)
    {
        if(root->left==NULL && root->right==NULL) return depth;
        int left=0x7fffffff,right=0x7fffffff;
        if(root->left!=NULL) left=dfs(root->left,depth+1);
        if(root->right!=NULL) right=dfs(root->right,depth+1);
        return min(left,right);
    }
public:
    int minDepth(TreeNode *root) {
        if(root==NULL) return 0;
        return dfs(root,1);
    }
};

