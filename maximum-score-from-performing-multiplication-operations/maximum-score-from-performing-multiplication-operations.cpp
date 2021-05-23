int n,m,dp[1001][1001];
class Solution {
public:
    int solve(int i,int j,vector<int>& nums, vector<int>& mul)
    {
        int idx=i+n-j-1;
        if(idx==m||i>j)
            return 0;
        
        if(dp[i][idx]!=-2000000)
            return dp[i][idx];
       return  dp[i][idx]=max(nums[i]*mul[idx]+solve(i+1,j,nums,mul),nums[j]*mul[idx]+solve(i,j-1,nums,mul));
       
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        n=nums.size(),m=multipliers.size();
        for(int i=0;i<m;i++)
            for(int j=0;j<m;j++)
                dp[i][j]=-2000000;
        return solve(0,n-1,nums,multipliers);
    }
};