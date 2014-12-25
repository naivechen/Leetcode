// https://oj.leetcode.com/problems/path-sum-ii/


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
    void dfs(TreeNode *root,int add,int sum,vector<int> tmp)
    {
        if(root->left==NULL && root->right==NULL)
        {
            if(add+root->val==sum)
            {
                tmp.push_back(root->val);
                ans.push_back(tmp);
            }
        }
        tmp.push_back(root->val);
        if(root->left!=NULL) dfs(root->left,add+root->val,sum,tmp);
        if(root->right!=NULL) dfs(root->right,add+root->val,sum,tmp);
    }
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        ans.clear();
        if(root==NULL) return ans;
        vector<int> tmp;
        dfs(root,0,sum,tmp);
        return ans;
    }
};
