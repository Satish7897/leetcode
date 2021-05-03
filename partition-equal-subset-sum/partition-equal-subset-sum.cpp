class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total=0;
        int n=nums.size();
        for(auto u:nums)
            total+=u;
        bool dp[total/2+10][n+1];
        for(int i=0;i<=n;i++)
            dp[0][i]=true;
        for(int i=1;i<=total/2;i++)
            dp[i][0]=false;
        if(total%2)return false;
        for(int i=1;i<=total/2;i++)
        {
            for(int j=1;j<=n;j++)
            {
                dp[i][j]=dp[i][j-1];
                if(nums[j-1]<=i)
                    dp[i][j]=dp[i][j]||dp[i-nums[j-1]][j-1];
            }
        }
        return dp[total/2][n];
    }
};