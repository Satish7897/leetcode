class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,r=1000010,ans=r;
        while(l<=r)
        {
            int mid=(l+r)/2;
            int ct=0;
            for(auto u:nums)
            {
                ct+=(u+mid-1)/mid;
            }
            if(ct<=threshold)
            {
                ans=min(ans,mid);
                r=mid-1;
            }
            else
                l=mid+1;
        }
        return ans;
    }
};