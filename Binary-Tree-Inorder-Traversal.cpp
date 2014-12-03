// https://oj.leetcode.com/problems/binary-tree-inorder-traversal/


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
private:
    vector<int> ans;
public:
    void inorder(TreeNode *root)
    {
        if(root!=NULL)
        {
            inorder(root->left);
            ans.push_back(root->val);
            inorder(root->right);
        }
    }
    vector<int> inorderTraversal(TreeNode *root) {
        inorder(root);
        return ans;
    }
};
