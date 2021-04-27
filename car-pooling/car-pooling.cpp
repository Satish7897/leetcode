class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>dp(1001,0);
        for(auto u:trips)
        {
            dp[u[1]]+=u[0];
            dp[u[2]]-=u[0];
        }
        for(int i=1;i<=1000;i++)
           { dp[i]+=dp[i-1];if(dp[i]>capacity)return false;}
        return true;
        
    }
};