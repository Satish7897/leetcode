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
int ans;
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        ans=0;
        solve(root);
        return ans;
    }
    int solve(TreeNode *root)
    {
        if(root==NULL)
            return 0;
        int lval=solve(root->left);
        int rval=solve(root->right);
        ans=max(ans,lval+rval);
       // cout<<root->val<<" "<<lval<<" "<<rval<<"\n";
        return max(lval,rval)+1;
    }
};