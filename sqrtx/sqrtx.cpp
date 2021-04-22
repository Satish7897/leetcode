#define ll long long int
class Solution {
public:
    int mySqrt(int x) {
        ll l=1,r=x,ans;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(mid*mid<=x)
            {
                ans=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }
        return ans;
        
    }
};