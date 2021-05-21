class Solution {
 int dp[(1<<16)+2];
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int total=0,n=nums.size(),z=1<<n,mx=0;
        fill(dp, dp+(1<<16)+2, -1);
        dp[0]=0;
        for(int u:nums)
        {
            mx=max(mx,u);
            total+=u;
        }
        int target=total/k;
        if(mx>(total/k)||(total%k!=0))return false;
        cout<<target;
        for(int mask=0;mask<z;mask++)
        {
            if(dp[mask]==-1)continue;
            for(int i=0;i<n;i++)
            {
                if((mask&(1<<i))==0&&dp[mask]+nums[i]<=target)
                dp[mask|(1<<i)]=(dp[mask]+nums[i])%target;
                
            }
        }
      //  cout<<dp[z-1];
        return dp[z-1]==0;
        
    }
};