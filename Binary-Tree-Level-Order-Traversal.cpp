// https://oj.leetcode.com/problems/binary-tree-level-order-traversal/


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
    vector<vector<int> > ans;
public:
    void dfs(TreeNode *root, int sum)
    {
        int len=ans.size();
        if(root==NULL) return ;
        if(sum<len)
            ans[sum].push_back(root->val);
        else 
        {
            vector<int> in;
            in.push_back(root->val);
            ans.push_back(in);
        }
        dfs(root->left,sum+1);
        dfs(root->right,sum+1);
    }
    vector<vector<int> > levelOrder(TreeNode *root) {
        ans.clear();
        if(root==NULL) return ans;
        dfs(root,0);
        return ans;
    }
};

