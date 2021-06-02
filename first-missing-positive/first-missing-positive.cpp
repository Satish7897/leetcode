class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
         nums[i]=(nums[i]<=0?500010:nums[i]);
        for(int i=0;i<n;i++)
        {
            int x=abs(nums[i]);
            if(x<=n)
            nums[x-1]=(nums[x-1]>0?nums[x-1]*-1:nums[x-1]);
        }
        int ans=n+1;
        for(int i=0;i<n;i++)
        {  cout<<nums[i]<<" ";
            if(nums[i]>0)
               { ans=i+1;break;}
        }
        return ans;
    }
};