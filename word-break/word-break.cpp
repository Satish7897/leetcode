class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
       int n=s.size();
       int dp[n+1];memset(dp,false,sizeof(dp));
        dp[0]=true;
       for(int i=1;i<=n;i++)
       {
           for(int j=i-1;j>=0;j--)
           {
               if(dp[j])
               {
                   string tmp=s.substr(j,i-j);
                   int f=0;
                   for(auto u:wordDict)
                   {if(u==tmp)f=1;}
                   if(f)
                      { dp[i]=true;break;}
               }
           }
       }
        return dp[n];
    }
};