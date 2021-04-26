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
    vector<double> averageOfLevels(TreeNode* root) {
      queue<TreeNode*>q;
        q.push(root);
        vector<double>ans;
        while(!q.empty())
        {
            long tmp=0,s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode *t=q.front();
                q.pop();
                tmp+=t->val;
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
                
            }
            ans.push_back((double)tmp/s);
        }
        return ans;
    }
};