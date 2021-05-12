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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>tmp;
        solve(root,ans,tmp,targetSum);
        return ans;
    }

    void solve(TreeNode *root,vector<vector<int>>&ans,vector<int>tmp,int target)
    {    if(root==NULL)return;
        tmp.push_back(root->val);
        if(root->right==NULL&&root->left==NULL&&target==root->val)
        {
            ans.push_back(tmp);
            return;
        }
        solve(root->left,ans,tmp,target-root->val);
        solve(root->right,ans,tmp,target-root->val);
        tmp.pop_back();
    }
};