class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int dp[n],mx=0,idx=0;
        memset(dp,1,sizeof(dp));
        vector<int>ans;
        for(int i=1;i<n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(nums[i]%nums[j]==0)
                    dp[i]=max(dp[i],dp[j]+1);
            }
            if(dp[i]>mx)
            {
                mx=dp[i];
                idx=i;
            }
        }
        ans.push_back(nums[idx]);
        int prev=nums[idx];
        cout<<idx;
        for(int i=idx-1;i>=0;i--)
        {
            if(dp[i]==mx-1&&prev%nums[i]==0)
            {
                ans.push_back(nums[i]);
                mx--;
                prev=nums[i];
            }
        }
        return ans;
    }
};