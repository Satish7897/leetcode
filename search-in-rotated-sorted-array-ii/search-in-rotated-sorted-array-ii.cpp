class Solution {
    bool isPresent(int l,int r,int target,vector<int>&nums)
    {
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)return true;
            if(nums[mid]<target)
                l=mid+1;
            else
                r=mid-1;
        }
        return false;
    }
public:
    bool search(vector<int>& nums, int target) {
        int idx=nums.size();
        int n=nums.size();
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
            {idx=i;break;}
        }
       
        return isPresent(0,idx-1,target,nums)||isPresent(idx,n-1,target,nums);
        
    }
};