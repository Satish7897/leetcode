class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int n:nums)
        {
            int ct=0,tmp=0;
            for(int i=1;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    if(n/i==i){ct++;tmp+=i;}
                    else {ct+=2;tmp+=i;tmp+=(n/i);}
                }
            }
            ans+=(ct==4?tmp:0);
        }
        return ans;
    }
};