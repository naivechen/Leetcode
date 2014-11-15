// https://oj.leetcode.com/problems/same-tree/


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
    bool check(TreeNode *left, TreeNode *right)
    {
        if(left==NULL && right==NULL) return true;
        if(left==NULL && right!=NULL) return false;
        if(left!=NULL && right==NULL) return false;
        if(left->val!=right->val) return false;
        return check(left->left,right->left) && check(left->right,right->right);
    }
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        return check(p,q);
    }
};
