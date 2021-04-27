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
    int sumRootToLeaf(TreeNode* root,int val=0) {
        if(!root)return 0;
        val=2*val+root->val;
        if(!root->left&&!root->right)
            return val;
        int tmp=0;
        if(root->left)
            tmp=sumRootToLeaf(root->left,val);
        if(root->right)
            tmp+=sumRootToLeaf(root->right,val);
      //  cout<<tmp<<"\n";
        return tmp;
    }
};