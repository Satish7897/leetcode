// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
#define ll long long int
class Solution {
public:
    int firstBadVersion(ll n) {
        ll l=1,r=n,ans;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(isBadVersion(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        return ans;
        
    }
};