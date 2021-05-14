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
int total=0;
class Solution {
    
public:
    int sumNumbers(TreeNode* root) {
        total=0;
        getSum(root,0);
        return total;
    }
    void getSum(TreeNode *root,int pSum)
    {
        if(!root)return;
        pSum=pSum*10+root->val;
        if(root->left==root->right)
         total+=pSum;
        else
        {
            getSum(root->left,pSum);
            getSum(root->right,pSum);
        }
            
    }
};