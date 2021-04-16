class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int l=1,r=nums.size()-1;int n=nums.size(),ans=8;
        if(n==1||nums[0]>nums[1])
            return 0;
        if(nums[n-1]>nums[n-2])
            return n-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1])
            {
                ans=mid;
                break;
            }
            if(nums[mid+1]>nums[mid])
                l=mid+1;
            else
                r=mid-1;
        }
        return ans;
    }
};