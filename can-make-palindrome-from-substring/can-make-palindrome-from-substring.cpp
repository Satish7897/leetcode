class Solution {
public:
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
        int n=s.size();
        int adj[n+1][26];
        memset(adj,0,sizeof(adj));
        for(int i=0;i<n;i++)
        {
            adj[i+1][s[i]-'a']++;
            for(int j=0;j<26;j++)
              adj[i+1][j]+=adj[i][j];
            
        }
        vector<bool>ans;
        for(auto u:queries)
        {
            int a[26],ct=0;
            for(int i=0;i<26;i++)
            {
                a[i]=adj[u[1]+1][i]-adj[u[0]][i];
                if(a[i]%2)
                    ct++;
            }
            ans.push_back(u[2]>=(ct/2));
        }
        return ans;
    }
};