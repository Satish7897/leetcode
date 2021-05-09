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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
       return dfs(root).second;
    }
    pair<int,TreeNode*> dfs(TreeNode* root)
    {
        if(!root)return {0,NULL};
        pair<int,TreeNode*>p=dfs(root->left),q=dfs(root->right);
        int d1 = p.first, d2 = q.first;
        return {max(d1, d2) + 1, d1 == d2 ? root : d1 > d2 ? p.second : q.second};
    }
};