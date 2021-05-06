class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
       int n=mat.size(),m=mat[0].size();
       for(int j=1;j<m;j++)
           mat[0][j]+=mat[0][j-1];
        for(int i=1;i<n;i++)
            mat[i][0]+=mat[i-1][0];
        for(int i=1;i<n;i++)
            for(int j=1;j<m;j++)
               mat[i][j]+=(mat[i-1][j]+mat[i][j-1]-mat[i-1][j-1]);
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++)
            for(int j=0;j<=m;j++)
            {
                if(i==0||j==0)dp[i][j]=0;
                else
                    dp[i][j]=mat[i-1][j-1];
            }
        int ans=0;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                int len=ans+1;
                while(i-len>=0&&j-len>=0&&dp[i][j]-dp[i][j-len]-dp[i-len][j]+dp[i-len][j-len]<=threshold)
                {  ans=len;
                    len++;
                }
            }
        }
       
        return ans;
            
        
       
    }
};