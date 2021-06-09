#define ll long long int
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<ll>dp(amount+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=amount;i++)
        {
            for(auto u:coins)
            {
                if(u<=i)
                    dp[i]=min(dp[i],1+dp[i-u]);
            }
        }
        dp[amount]=(dp[amount]==INT_MAX?-1:dp[amount]);
        return dp[amount];
    }
};