class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,r=nums.size()-1;int n=r+1;
        if(r==0)return nums[0];
        while(l<=r)
        {
            int mid=(l+r+1)/2;
            if(mid-1>=0&&nums[mid]==nums[mid-1])
            {
                if(mid%2==0)
                    r=mid-1;
                else
                    l=mid+1;
            }
            else if(mid+1<n&&nums[mid]==nums[mid+1])
            {
                if(mid%2!=0)
                    r=mid-1;
                else
                    l=mid+1;
            }
            else
                return nums[mid];
        }
        return 0;
        
    }
};