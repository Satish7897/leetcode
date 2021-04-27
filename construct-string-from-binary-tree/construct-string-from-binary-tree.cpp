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
    string tree2str(TreeNode* t) {
        
        if(t==NULL)return "";
        string s=to_string(t->val);
           if(t->right||t->left)
           { s+="(";
            if(t->left)
            s+=tree2str(t->left);
            s+=")";}
        
        if(t->right)
        {
            s+="(";
            s+=tree2str(t->right);
            s+=")";
        }
        
        return s;
    }
};