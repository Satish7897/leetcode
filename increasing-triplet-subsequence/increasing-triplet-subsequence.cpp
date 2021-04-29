class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        int mn[n],mx[n];
        mn[0]=nums[0],mx[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
            mn[i]=min(mn[i-1],nums[i]);
        for(int i=n-2;i>=0;i--)
           mx[i]=max(mx[i+1],nums[i]);
        bool f=0;
        for(int i=1;i<n-1;i++)
        {
            if(mn[i-1]<nums[i]&&nums[i]<mx[i+1])
               f=1;
        }
        return f;
    }
};