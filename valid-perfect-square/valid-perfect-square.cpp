#define ll long long int 
class Solution {
public:
    bool isPerfectSquare(int num) {
       ll l=1,r=num/2;
        if(num==1)return true;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            ll x=mid*mid;
            if(x==num)
                return true;
            else if(x>num)
                r=mid-1;
            else
                l=mid+1;
        }
        return false;
    }
};