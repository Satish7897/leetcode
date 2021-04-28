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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int sum=0;
        while(q.size())
        {
            sum=0;
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                TreeNode *tmp=q.front();q.pop();
                sum+=tmp->val;
                if(tmp->left)q.push(tmp->left);
                if(tmp->right)q.push(tmp->right);
            }
         
        }
        return sum;
        
    }
};