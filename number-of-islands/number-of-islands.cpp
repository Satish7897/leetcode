    int dir[]={0,1,0,-1,0};
class Solution {
bool vis[301][301];int n,m;
vector<vector<char>>grid;
public:
    void dfs(int i,int j)
    {
        vis[i][j]=true;
        for(int k=0;k<4;k++)
        {
            int x=i+dir[k];
            int y=j+dir[k+1];
            if(x>=0&&x<n&&y>=0&&y<m&&grid[x][y]=='1'&&vis[x][y]==false)
                dfs(x,y);
        }
    }
public:
    int numIslands(vector<vector<char>>& gd) {
        this->grid=gd;
         n=grid.size(),m=grid[0].size();int ct=0;
        memset(vis,false,sizeof(vis));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1'&&vis[i][j]==false)
                    {ct++;
                     dfs(i,j);
                    }
            }
        }
        return ct;
        
    }
};