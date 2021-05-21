class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size(),mx[n],mn[n];
        int sum=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(sum+nums[i]>nums[i])
              sum+=nums[i];
            else
              sum=nums[i];
            ans=max(ans,sum);
            
        }
        sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(sum+nums[i]<nums[i])
                sum+=nums[i];
            else
                sum=nums[i];
            ans=max(ans,abs(sum));
        }
        return ans;
        
    }
};