/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* root, TreeNode* target) {
        queue<TreeNode*>q;
        q.push(root);
        TreeNode *ans;
        while(q.size())
        {
            TreeNode*tmp=q.front();
            q.pop();
            if(tmp->val==target->val)
            {
                ans=tmp;
            }
            if(tmp->left)
                q.push(tmp->left);
            if(tmp->right)
                q.push(tmp->right);
        }
        return ans;
        
    }
};