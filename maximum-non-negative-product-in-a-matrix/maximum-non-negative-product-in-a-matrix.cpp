#define mod 1000000007
class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        long dpMax[n][m],dpMin[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0&&j==0)
                {dpMax[i][j]=grid[i][j],dpMin[i][j]=grid[i][j];}
                else if(i==0)
                 dpMin[i][j]=dpMax[i][j]=(grid[i][j]*dpMax[i][j-1]);
                else if(j==0)
                 dpMin[i][j]=dpMax[i][j]=(grid[i][j]*dpMax[i-1][j]);
        
                else
                {
                    if(grid[i][j]<0)
                    {
                        dpMax[i][j]=min(dpMin[i-1][j],dpMin[i][j-1])*grid[i][j];
                        dpMin[i][j]=max(dpMax[i-1][j],dpMax[i][j-1])*grid[i][j];
                    }
                    else
                    {
                        dpMax[i][j]=max(dpMax[i-1][j],dpMax[i][j-1])*grid[i][j];
                        dpMin[i][j]=min(dpMin[i-1][j],dpMin[i][j-1])*grid[i][j];
                    }
                }
                //cout<<dpMax[i][j]<<" ";
            }
          //  cout<<"\n";
        }
        dpMax[n-1][m-1]%=mod;
        return dpMax[n-1][m-1]>=0?dpMax[n-1][m-1]%mod:-1;
        
    }
};