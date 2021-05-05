int n,m,mx;
bool valid(int i,int j)
{
    if(i>=0&&i<n&&j>=0&&j<m)return true;
    return false;
}
int x1[]={-1,0,1,0};
int z[]={0,1,0,-1};
int dfs(vector<vector<int>>&grid,int i,int j)
{
    
    int tmp=0,val=grid[i][j];
    grid[i][j]=0;
    for(int k=0;k<4;k++)
    {
        int x=i+x1[k];
        int y=j+z[k];
        if(valid(x,y)&&grid[x][y]!=0)
           tmp=max(tmp,grid[x][y]+dfs(grid,x,y));
        
    }
   // cout<<grid[i][j]+tmp<<"\n";
    grid[i][j]=val;
     return tmp;
}
class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        
        n=grid.size(),m=grid[0].size();
      
        int fans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j])
                {
                    fans=max(fans,grid[i][j]+dfs(grid,i,j));
                }
            }
        }
        return fans;
        
    }
};