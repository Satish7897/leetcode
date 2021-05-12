int dp[201][201];
int d[]={0,1,0,-1,0},n,m,ans;
class Solution {
    vector<vector<int>>matrix;
    int dfs(int i,int j)
    {   int sum=0;
        for(int k=0;k<4;k++)
        {
            int x=i+d[k];
            int y=j+d[k+1];
            if(x>=0&&x<n&&y>=0&&y<m&&matrix[x][y]>matrix[i][j])
            {
                if(dp[x][y]!=-1)
                    sum=max(sum,dp[x][y]);
                else
                    sum=max(sum,dfs(x,y));
            }
          
        }
       ans=max(ans,sum+1);
     return dp[i][j]=sum+1;
    }
public:
    int longestIncreasingPath(vector<vector<int>>& mat) {
        memset(dp,-1,sizeof(dp));
        this->matrix=mat;ans=0;
        n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                dfs(i,j);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cout<<dp[i][j]<<" ";
            cout<<"\n";
        }
        return ans;
        
    }
};