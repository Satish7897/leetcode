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
    int getMinimumDifference(TreeNode* root) {
       int ans=INT_MAX;
        TreeNode *preNode=NULL;
        solve(root,preNode,ans);
        return ans;
    }
    void solve(TreeNode*root,TreeNode*&preNode,int&ans)
    {
        if(root->left){
           // ans=min(ans,abs(root->left->val-root->val));
            solve(root->left,preNode,ans);
        }
        if(preNode)ans=min(ans,abs(preNode->val-root->val));
        preNode=root;
        if(root->right)solve(root->right,preNode,ans);
    }
};