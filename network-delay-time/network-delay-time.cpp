class Solution {
int dp[101];
    void dfs(int src,vector<pair<int,int>>adj[])
    {
        for(auto u:adj[src])
        {
            if(dp[u.first]>dp[src]+u.second)
            {
                dp[u.first]=dp[src]+u.second;
                dfs(u.first,adj);
            }
        }
    }
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>adj[n+1];
        for(auto u:times)
          adj[u[0]].push_back({u[1],u[2]});
        for(int i=1;i<=n;i++)
            dp[i]=INT_MAX;
        dp[k]=0;
        dfs(k,adj);
        int mx=0;
        for(int i=1;i<=n;i++)
            mx=max(mx,dp[i]);
        if(mx>=INT_MAX)return -1;
        else return mx;
        
    }
};