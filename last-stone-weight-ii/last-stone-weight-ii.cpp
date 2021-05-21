class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        vector<int>dp(1501,0);
      
        int total=0;dp[0]=1;
       for(int wt:stones)
       {   total+=wt;
           for(int i=min(1500,total);i>=wt;i--)
               dp[i]|=dp[i-wt];
       }
       int ans=INT_MAX;
      
        for(int i=total/2;i>=0;i--)
        {
            if(dp[i])
                return total-2*i;
        }
        return ans;
    }
};