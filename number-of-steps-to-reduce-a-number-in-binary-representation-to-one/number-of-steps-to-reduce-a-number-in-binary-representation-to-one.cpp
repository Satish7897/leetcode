class Solution {
public:
    int numSteps(string s) {
        int n=s.size();
        int carry=0,ans=0;
        for(int i=n-1;i>0;i--)
        {   
           ans++;
            if(s[i]-'0'+carry==1)
            {
                carry=1;
                ans++;
            }
        }
        return ans+carry;
    }
};