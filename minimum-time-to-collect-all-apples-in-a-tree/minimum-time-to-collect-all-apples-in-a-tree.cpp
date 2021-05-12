class Solution {
private:
    int dfs(int src,vector<int>edge[],vector<bool>& hasApple,vector<bool>vis)
    {
        vis[src]=true;
        int sum=0;
      //  cout<<src<<"\n";
        for(auto u:edge[src])
            if(!vis[u])
                sum+=dfs(u,edge,hasApple,vis);
        if(src==0)return sum;
        if(sum!=0)return sum+1;
        else if(hasApple[src])return 1;
        return 0;
    }
    
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<bool>vis(n,false);
        vector<int>edge[n];
        for(auto u:edges)
        {
            edge[u[0]].push_back(u[1]);
            edge[u[1]].push_back(u[0]);
        }
        return dfs(0,edge,hasApple,vis)*2;
    }
};