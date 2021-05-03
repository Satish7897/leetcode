class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total=0;
        int n=nums.size();
        for(auto u:nums)
            total+=u;
        if(total%2)return false;
                bool dp[total/2+1];memset(dp,false,sizeof(dp));dp[0]=true;
        for(auto u:nums)
        {
            for(int i=total/2;i>=u;i--)
            {
                if(dp[i-u])
                {
                    dp[i]=true;
                }
                if(dp[total/2])return true;
            }
        }
        return false;
        
    }
};