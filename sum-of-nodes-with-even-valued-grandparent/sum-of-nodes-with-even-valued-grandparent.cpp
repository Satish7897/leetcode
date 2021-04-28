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
    int sumEvenGrandparent(TreeNode* root) {
        TreeNode*gd=NULL;
        TreeNode*pr=NULL;
        int sum=0;
        solve(root,pr,gd,sum);
        return sum;
        
    }
    void solve(TreeNode*root,TreeNode*pr,TreeNode*gd,int&sum)
    {
        if(!root)return;
        if(gd&&gd->val%2==0)
            sum+=root->val;
        if(root->left)
            solve(root->left,root,pr,sum);
        if(root->right)
            solve(root->right,root,pr,sum);
        
    }
    
};