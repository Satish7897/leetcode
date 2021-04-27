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
private:
    void solve(TreeNode*root,vector<int>&ans)
    {
        stack<TreeNode*>q;
        q.push(root);
        while(q.size())
        {
            TreeNode *tmp=q.top();
            q.pop();
            if(!tmp->left&&!tmp->right)
                ans.push_back(tmp->val);
             if(tmp->left)
                 q.push(tmp->left);
            if(tmp->right)
                q.push(tmp->right);
                
        }
    }
    
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>el1,el2;
        solve(root1,el1);
        solve(root2,el2);
        if(el1.size()!=el2.size())return false;
        for(int i=0;i<el1.size();i++)
        { // cout<<el1[i]<<" ";
            if(el1[i]!=el2[i])return false;
        }
        return true;
        
        
    }
};