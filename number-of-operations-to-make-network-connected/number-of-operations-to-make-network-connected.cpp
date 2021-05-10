int totalEdges,totalNodes;
class Solution {
public:
    void dfs(int src,vector<int>adj[],vector<bool>&vis)
    {
        vis[src]=true;
        totalNodes++;
        totalEdges+=adj[src].size();
        for(auto u:adj[src])
        {
            if(!vis[u])dfs(u,adj,vis);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int>adj[n];
        vector<bool>vis(n,false);
        int cnc=0,rEdges=0;
        for(auto u:connections)
        {adj[u[0]].push_back(u[1]);
         adj[u[1]].push_back(u[0]);}
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                cnc++;
                totalEdges=0;
                totalNodes=0;
                dfs(i,adj,vis);
                rEdges+=(totalEdges/2-totalNodes+1);
            }
        }
        if(rEdges<cnc-1)return -1;
        else return cnc-1;
    }
};