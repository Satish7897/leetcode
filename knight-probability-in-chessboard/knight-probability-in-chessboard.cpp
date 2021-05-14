int x1[] = {-2,-2,-1,-1,2,2,1,1};
int x2[] = {1,-1,2,-2,1,-1,2,-2};
double ans;int n;
class Solution {
public:
    void solve(vector<vector<double>>&dp1,vector<vector<double>>&dp2)
    {
        for(int i=0;i<n;i++)
          { for(int j=0;j<n;j++)
            {
               if(dp1[i][j])
               {
                   for(int p=0;p<8;p++)
                   {
                       int x=i+x1[p];
                       int y=j+x2[p];
                       if(x>=0&&x<n&&y>=0&&y<n)
                           dp2[x][y]+=dp1[i][j]/8.0;
                   }
               }
               dp1[i][j]=0.0;
            }
        }
        
    }
    double getAns(vector<vector<double>>&dp1)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                ans+=dp1[i][j];
        return ans;
    }
    double knightProbability(int n1, int k, int row, int column) {
        vector<vector<double>>dp1(n1,vector<double>(n1,0.0));
        vector<vector<double>>dp2(n1,vector<double>(n1,0.0));
        dp1[row][column]=1;
        n=n1;
         for(int i=1;i<=k;i++)
         {
             if(i%2)
                 solve(dp1,dp2);
             else
                 solve(dp2,dp1);
         }
         ans=0.0;
        if(k%2==0)
            getAns(dp1);
        else
            getAns(dp2);
        return ans;
    }
};