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
    using iter = vector<int>::const_iterator;
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildTree(nums.begin(),nums.end());       
    }
    TreeNode*buildTree(iter st,iter en)
    {
        if(st>=en)return nullptr;
        iter mid=st+(en-st)/2;
        TreeNode* node=new TreeNode(*mid);
        node->left=buildTree(st,mid);
        node->right=buildTree(mid+1,en);
        return node;
    }
};