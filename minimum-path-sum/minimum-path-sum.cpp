class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
       int dp[m];
        for(int i=0;i<n;i++)
        {   for(int j=0;j<m;j++)
            dp[j]=grid[i][j];
            for(int j=0;j<m;j++)
            { 
                if(i==0&&j==0)grid[i][j]=dp[j];
                else grid[i][j]=INT_MAX;
                if(i!=0)
                    grid[i][j]=min(grid[i-1][j]+dp[j],grid[i][j]);
                if(j!=0)
                    grid[i][j]=min(grid[i][j],grid[i][j-1]+dp[j]);
            }
        }
        return grid[n-1][m-1];
    }
};