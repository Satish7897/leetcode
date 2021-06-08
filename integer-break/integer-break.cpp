class Solution {
public:
    int integerBreak(int n) {
        int ans=1;
        if(n<=3)
            return n-1;
        while(n-3>1)
        {
            ans*=3;
            n-=3;
        }
        cout<<n;
        return ans*n;
    }
};