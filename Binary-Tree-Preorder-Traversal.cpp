// https://oj.leetcode.com/problems/binary-tree-preorder-traversal/


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
    void preorder(TreeNode *root)
    {
        if(root!=NULL)
        {
            ans.push_back(root->val);
            preorder(root->left);
            preorder(root->right);
        }
    }
    vector<int> preorderTraversal(TreeNode *root) {
        preorder(root);
        return ans;
    }
};

