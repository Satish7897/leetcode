class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=max(nums[i],nums[i]+nums[i-1]);
            ans=max(ans,nums[i]);
        }
        return ans;
    }
};