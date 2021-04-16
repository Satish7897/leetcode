class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul=1,ct=0;
        for(auto u:nums)
        {
            if(u==0)ct++;
            else
                mul*=u;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(ct>=2)nums[i]=0;
            else if(ct==1)
            {
                if(nums[i]==0)
                    nums[i]=mul;
                else
                    nums[i]=0;
            }
            else
                nums[i]=mul/nums[i];
        }
        return nums;
    }
};