class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<int>adj[n];
        for(auto u:paths)
        {
            adj[u[0]-1].push_back(u[1]-1);
            adj[u[1]-1].push_back(u[0]-1);          
        }
        vector<int>ans(n,5);
        for(int i=0;i<n;i++)
        {
            vector<int>col(6,0);
            for(auto u:adj[i])
                col[ans[u]]=1;
            for(int j=1;j<=4;j++)
            {
                if(!col[j])
                {
                    ans[i]=j;
                    break;
                }
            }
                
        }
        return ans;
    }
};