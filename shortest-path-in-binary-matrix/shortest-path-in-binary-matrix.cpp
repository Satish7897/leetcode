class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        if(grid[0][0]==1)return -1;
        int ans[n][m];bool vis[n][m];
        memset(vis,false,sizeof(vis));
        int x1[]={-1,-1,0,1,1, 1, 0,-1};
        int y1[]={ 0, 1,1,1,0,-1,-1,-1};
        queue<pair<int,int>>q;
        q.push({0,0});
        vis[0][0]=true;ans[0][0]=1;
        while(q.size())
        {
            auto u=q.front();q.pop();
            for(int i=0;i<=7;i++)
            {
                int x=x1[i]+u.first;
                int y=y1[i]+u.second;
                if(x>=0&&x<n&&y>=0&&y<m&&vis[x][y]==false&&grid[x][y]==0)
                {
                    vis[x][y]=true;
                    ans[x][y]=ans[u.first][u.second]+1;
                    q.push({x,y});
                }
            }
            
        }
        if(!vis[n-1][m-1])return -1;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //         cout<<ans[i][j]<<" ";
        //     cout<<"\n";
        // }
        return ans[n-1][m-1];
        
    
    }
};