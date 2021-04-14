#define ll long long int
class Solution {
    vector<pair<int,int>>adj[101];
    ll dis[101],cnt[101],fans=INT_MAX,en;
    void dfs(int src,int k,int ans)
    { 
      if(src==en){
          fans=ans;return;}
         if(k==0) return;
        for(auto u:adj[src])
        {  
          if(ans+u.second>fans)continue;
          dfs(u.first,k-1,ans+u.second);
        }
    }
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        for(int i=0;i<=n;i++)
            dis[i]=INT_MAX;
        en=dst;
        for(auto u:flights)
          adj[u[0]].push_back({u[1],u[2]});
         
        dfs(src,K+1,0);
       // cout<<fans;
        if(fans>=INT_MAX)return -1;
        return fans;
        
    }
};