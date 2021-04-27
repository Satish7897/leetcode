/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        map<int,int>mp;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size())
        {
            TreeNode*tmp=q.front();
            q.pop();
            if(mp[k-tmp->val])return true;
            mp[tmp->val]=1;
            if(tmp->left)q.push(tmp->left);
            if(tmp->right)q.push(tmp->right);
            
        }
        return false;
    }
};