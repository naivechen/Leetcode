// https://oj.leetcode.com/problems/binary-search-tree-iterator/


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    queue<int> minq;
    
    map<TreeNode*, bool> m;
    stack<TreeNode *> s;
    BSTIterator(TreeNode *root) {
        //inOrder traversal
        if(root != NULL)
        {
            s.push(root);
            m[root] = true;
            while(!s.empty())
            {
                TreeNode* top = s.top();
                if(top->left && m.find(top->left) == m.end())
                {
                    s.push(top->left);
                    m[top->left] = true;
                    continue;
                }
                minq.push(top->val);
                s.pop();
                if(top->right && m.find(top->right) == m.end())
                {
                    s.push(top->right);
                    m[top->right] = true;
                }
            }
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !minq.empty();
    }

    /** @return the next smallest number */
    int next() {
        int front = minq.front();
        minq.pop();
        return front;
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
