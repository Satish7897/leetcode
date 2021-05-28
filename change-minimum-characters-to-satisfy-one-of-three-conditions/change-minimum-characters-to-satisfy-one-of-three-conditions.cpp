int n,m;
class Solution {
    int solve(vector<int>a,vector<int>b)
    {   int sum=0,ans=INT_MAX;
        for(int i=0;i<26;i++)
        {   
            if(i>0)
                {a[i]+=a[i-1];
                b[i]+=b[i-1];}
            if(i<25)
            {
                ans=min(ans,m-a[i]+b[i]);
                ans=min(ans,n-b[i]+a[i]);
            }
            
        }
    
     return ans;
    }
public:
    int minCharacters(string a, string b) {
        vector<int>al1(26,0),al2(26,0);
        int ans=INT_MAX;
        n=a.size(),m=b.size();
        for(auto u:a)
            al1[u-'a']++;
        for(auto u:b)
            al2[u-'a']++;
        for(int i=0;i<26;i++)
            ans=min(ans,n+m-al1[i]-al2[i]);
        ans=min(ans,solve(al2,al1));
       // ans=min(ans,min(solve(al1,al2),solve(al2,al1)));
        return ans;
    }
};