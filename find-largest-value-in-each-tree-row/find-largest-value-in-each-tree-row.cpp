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
#define ll long long int
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(!root)return ans;
        queue<TreeNode*>q;
        q.push(root);
        
        while(q.size())
        {
            ll mx=-8589934592;
            int sz=q.size();
           //  cout<<sz<<"\n";
            for(int i=0;i<sz;i++)
            {    TreeNode *troot=q.front();
                 q.pop();
                 mx=max((ll)troot->val,mx);
                 if(troot->left)
                     q.push(troot->left);
                 if(troot->right)
                     q.push(troot->right);
                 
            }
            ans.push_back(mx);
        }
        return ans;
    }
};