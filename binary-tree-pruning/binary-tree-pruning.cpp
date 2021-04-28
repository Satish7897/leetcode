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
    TreeNode* pruneTree(TreeNode* root) {
        return (solve(root)==true?root:NULL);
        
    }
    bool solve(TreeNode*root)
    {
        if(root==NULL)return false;
        if(!solve(root->left))
            root->left=NULL;
        if(!solve(root->right))
            root->right=NULL;
        if(root->val==1||solve(root->left)||solve(root->right))
            return true;
        return false;
    }
};