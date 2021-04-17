class Solution {
public:
    string generateTheString(int n) {
        string ans;
        if(n%2==0)
        {
            for(int i=0;i<n-1;i++)ans+='a';
            ans+='b';
        }
        else
        {
            for(int i=0;i<n-2;i++)ans+='a';
            if(n!=1)
            ans+='b';
            ans+='c';
        }
        return ans;
    }
    
};