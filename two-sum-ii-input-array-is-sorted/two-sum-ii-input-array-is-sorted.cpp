class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(nums[l]+nums[r]!=target)
        {
            if(nums[l]+nums[r]<target)
                l++;
            else
                r--;
        }
    
        return vector<int>({l+1,r+1});
    }
};