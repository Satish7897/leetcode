int n,m;
bool valid(int i,int j)
{
    if(i>=0&&i<n&&j>=0&&j<m)
        return true;
    return false;
}
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         n=grid.size(),m=grid[0].size();
        int ans=0;bool vis[n][m];
        memset(vis,false,sizeof(vis));
        for(int r=0;r<n;r++)
        {
            for(int c=0;c<m;c++)
            {   int ct=0;
                if(grid[r][c]==1&&vis[r][c]==false)
                { 
                    queue<pair<int,int>>q;
                    q.push({r,c});vis[r][c]=true;
                    while(!q.empty())
                    { ct++;
                        auto u=q.front();
                        q.pop();
                        int i=u.first,j=u.second;
                     if(valid(i+1,j)&&vis[i+1][j]==false&&grid[i+1][j]==1)
                    {
                        vis[i+1][j]=true;
                        q.push({i+1,j});
                    }
                    if(valid(i-1,j)&&vis[i-1][j]==false&&grid[i-1][j]==1)
                    {
                        vis[i-1][j]=true;
                        q.push({i-1,j});
                    }
                    if(valid(i,j+1)&&vis[i][j+1]==false&&grid[i][j+1]==1)
                    {
                        vis[i][j+1]=true;
                        q.push({i,j+1});
                    }
                    if(valid(i,j-1)&&vis[i][j-1]==false&&grid[i][j-1]==1)
                    {
                        vis[i][j-1]=true;
                        q.push({i,j-1});
                    }}
                    
                }
             ans=max(ans,ct);
            }
        }
        return ans;
    }
};