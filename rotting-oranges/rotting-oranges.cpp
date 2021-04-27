class Solution {
    int n,m;
public:
    bool valid(int i,int j)
    {
        return (i>=0&&i<n&&j>=0&&j<m);
    }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        n=grid.size(),m=grid[0].size();int ans=0;
        vector<vector<int>>dp(n,vector<int>(m,INT_MAX));
        int x[]={-1,0,1,0};
        int y[]={0,-1,0,1};
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)dp[i][j]=0;
                else if(grid[i][j]==2)
                {
                    q.push({i,j});
                    dp[i][j]=0;
                }
            }
        }
        while(q.size())
        {
            auto u=q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                int r=u.first+x[i];
                int s=u.second+y[i];
                if(valid(r,s)&&grid[r][s]==1&&dp[r][s]>(dp[u.first][u.second]+1))
                { 
                    dp[r][s]=dp[u.first][u.second]+1;
                    q.push({r,s});
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
               ans=max(ans,dp[i][j]);
           
        }
        return ans==INT_MAX?-1:ans;
    }
};