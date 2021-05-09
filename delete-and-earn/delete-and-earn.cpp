class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int dp[10001],mp[10001];
        memset(mp,0,sizeof(mp));
        for(auto el:nums)mp[el]++;
        dp[1]=mp[1];dp[2]=2*mp[2];
        int ans=max(dp[1],dp[2]);
        for(int i=3;i<=10000;i++)
        {
            dp[i]=i*mp[i]+max(dp[i-2],dp[i-3]);
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};