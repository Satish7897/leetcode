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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root)
        q.push(root);
        int f=0;
        while(q.size())
        {
            int sz=q.size();
            vector<int>v;
            for(int i=0;i<sz;i++)
            {
                TreeNode *tmp=q.front();q.pop();
                if(tmp)
               { v.push_back(tmp->val);
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);}
            }
            if(f)
                reverse(v.begin(),v.end());
            ans.push_back(v);
            f^=1;
        }
        return ans;
    }
};