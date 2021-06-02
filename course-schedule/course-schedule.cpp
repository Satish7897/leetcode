class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& graph) {
        vector<int>inDeg(n,0);
        vector<int>adj[n+1];
        for(auto u:graph)
        {
            adj[u[0]].push_back(u[1]);
            inDeg[u[1]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(inDeg[i]==0)q.push(i);
        }int ct=0;
      
        while(q.size())
        {
            int src=q.front();
         //   cout<<src<<" ";
            q.pop();
            ct++;
            for(auto u:adj[src])
            {
                if(inDeg[u]==1)
                {q.push(u);
               
                }
                 inDeg[u]--;
            }
        }
       // cout<<ct;
        return ct==n;
        
    }
};