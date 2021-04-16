#define ld  double
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        for(int i=1;i<nums.size();i++)
            nums[i]+=nums[i-1];
        double ans=0;
        for(int i=k-1;i<nums.size();i++)
        {
            if(i==k-1)
                ans=((ld)nums[i]/(ld)k);
            else
                ans=max(ans,(ld)(nums[i]-nums[i-k])/(ld)(k));
        }
        return ans;
    }
};