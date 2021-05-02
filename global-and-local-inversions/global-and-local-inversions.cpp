class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int n=nums.size();
        int mx=nums[0];
        for(int i=2;i<n;i++)
        {
            if(nums[i]<mx)return false;
            mx=max(mx,nums[i-1]);
        }
        return true;
    }
};