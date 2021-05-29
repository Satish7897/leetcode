int n,val,f;
int x1[]={-1,0,1,0};
int x2[]={0,-1,0,1};
bool vis[51][51];
class Solution {
bool valid(int i,int j)
{
    return (i>=0&&i<n&&j>=0&&j<n);
}
void dfs(int i,int j,vector<vector<int>>& grid)
{  vis[i][j]=true;
    if(i==n-1&&j==n-1)
    {f=1;return ;}
    for(int k=0;k<4;k++)
    {  int i1=i+x1[k];
       int j1=j+x2[k];
        if(valid(i1,j1)&&vis[i1][j1]==false&&grid[i1][j1]<=val)
            dfs(i+x1[k],j+x2[k],grid);
    }
    
}
public:
    int swimInWater(vector<vector<int>>& grid) {
        int l=grid[0][0],r=3000,ans=r;
        n=grid.size();
        while(l<=r)
        {
            val=(l+r)/2;
            memset(vis,false,sizeof(vis));
            f=0;dfs(0,0,grid);
           
            if(f)
               {ans=min(ans,val); r=val-1;}
            else
                l=val+1;
            
        }
        return ans;
    }
};