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
long totalSum,ans;
#define mod 1000000007
void getSum(TreeNode *root)
{
    if(root==NULL)return ;
    totalSum+=root->val;
    getSum(root->left);
    getSum(root->right);
}
int solve(TreeNode *root)
{
    if(root==NULL)return 0;
    int x=root->val+solve(root->left)+solve(root->right);
    ans=max(ans,((totalSum-x)*x));
    return x;
}
class Solution {
public:
    int maxProduct(TreeNode* root) {
      totalSum=0,ans=0;
       getSum(root);
      solve(root);
        return ans%mod;
    }
};