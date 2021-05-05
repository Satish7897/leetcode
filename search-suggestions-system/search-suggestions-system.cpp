class Solution {
public:
    struct Trie{
        unordered_map<char,Trie*>child;
        vector<string>suggestions;
    };
    void insert(Trie*root,string word)
    {
        for(auto u:word)
        {
            if(root->child.find(u)==root->child.end())
                root->child[u]=new Trie();
            root=root->child[u];
            if(root->suggestions.size()<3)
                root->suggestions.emplace_back(word);
        }
    }
    vector<vector<string>> suggestedProducts(vector<string>& products, string target) {
         int n=target.size();
        vector<vector<string>>ans(n);
        Trie *root=new Trie();
        sort(products.begin(),products.end());
        for(auto u:products)
            insert(root,u);
       
        for(int i=0;i<n;i++)
        {   auto it=root->child.find(target[i]);
            if(it!=root->child.end())
            root=it->second;
            else
                break;
         ans[i]=root->suggestions;
        }
       
        return ans;
        
    }
};