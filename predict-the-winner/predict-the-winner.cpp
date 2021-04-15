class Solution {

public:
    int dp[21][21];
    bool PredictTheWinner(vector<int>& nums) {
      //  memeset(dp,-1,sizeof(dp));
        int x=solve(0,nums.size()-1,nums);
       return x>=0;
    }
    int solve(int i,int j,vector<int>nums)
    {
        if(i==j)
            return nums[i];
        if(dp[i][j])return dp[i][j];
        int a=nums[i]-solve(i+1,j,nums);
        int b=nums[j]-solve(i,j-1,nums);
        return dp[i][j]=max(a,b);
    }
};