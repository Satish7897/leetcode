int dp[8][16384]={};
class Solution {
public:
    int maxScore(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
       return solve(nums,1,0);
    }
    int solve(vector<int>&nums,int idx,int mask)
    {
         if(idx>(nums.size()/2))
          return 0;
      if(dp[idx][mask]!=-1)
          return dp[idx][mask];
      for(int i=0;i<nums.size();i++)
      {
          for(int j=i+1;j<nums.size();j++)
          {
                int new_mask = (1 << j) + (1 << i);
              if((mask&new_mask)==0)
              {
                  dp[idx][mask]=max(dp[idx][mask],idx*__gcd(nums[i],nums[j])+solve(nums,idx+1,mask+new_mask));
              }
          }
      }
        return dp[idx][mask];
    }
   
};