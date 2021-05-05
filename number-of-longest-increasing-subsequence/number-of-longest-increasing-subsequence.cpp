class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        int cnt[n],dp[n];
        for(int i=0;i<n;i++)
        {
            cnt[i]=1;dp[i]=1;
        }
        int len=1;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    if(dp[j]>=dp[i])
                    {
                        dp[i]=dp[j]+1;
                        cnt[i]=cnt[j];
                    }
                    else if(dp[j]+1==dp[i])
                    {
                        cnt[i]+=cnt[j];
                        
                    }
                }
            }
            len=max(len,dp[i]);
        }
        cout<<len;
        int ans=0;
        for(int i=0;i<n;i++)
        {   
           // cout<<cnt[i]<<" ";
            ans+=(dp[i]==len?cnt[i]:0);
        }
        return ans;
    }
};