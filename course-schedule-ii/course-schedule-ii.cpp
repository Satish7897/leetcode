class Solution {
   
public:
    vector<int> findOrder(int n, vector<vector<int>>& graph) {
        vector<int>adj[n];
        vector<int>inDeg(n,0),ans;
        for(auto u:graph)
           { adj[u[1]].push_back(u[0]);inDeg[u[0]]++;}
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(inDeg[i]==0)
                q.push(i);
        }
        while(q.size())
        {
            int src=q.front();q.pop();
            ans.push_back(src);
            for(auto u:adj[src])
            {
                if(inDeg[u]==1)
                    q.push(u);
                inDeg[u]--;
            }
                
        }
        if(ans.size()!=n)
        {
            vector<int>tmp;
            return tmp;
        }
        return ans;
        
        
        
        
        
    }
};