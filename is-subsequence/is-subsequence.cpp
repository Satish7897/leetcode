class Solution {
public:
    bool isSubsequence(string s, string t) {
        vector<int>adj[26];
        for(int i=0;i<t.size();i++)
            adj[t[i]-'a'].push_back(i);
        int prev=-1;
        for(auto u:s)
        {   int c=u-'a';
            int idx=upper_bound(adj[c].begin(),adj[c].end(),prev)-adj[c].begin();
       
            if(idx==adj[c].size())return false;
         prev=adj[c][idx];
        }
        return true;
    }
};