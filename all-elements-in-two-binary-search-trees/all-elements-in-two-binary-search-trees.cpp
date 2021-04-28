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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>el1;
        vector<int>el2;
        vector<int>ans;
        inorder(root1,el1);
        inorder(root2,el2);
        int n=el1.size(),m=el2.size(),i=0,j=0;
        while(i<n&&j<m)
        {
            if(el1[i]<el2[j])
            {ans.push_back(el1[i]);i++;}
            else
            {ans.push_back(el2[j]);j++;}
        }
        while(i<n)
        {ans.push_back(el1[i]);i++;}
        while(j<m)
        {ans.push_back(el2[j]);j++;}
        return ans;
            
        
    }
    void inorder(TreeNode*root,vector<int>&el)
    {
        if(!root)return;
        inorder(root->left,el);
        el.push_back(root->val);
        inorder(root->right,el);
    }
    
    
};