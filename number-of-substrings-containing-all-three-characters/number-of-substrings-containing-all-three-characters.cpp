class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0,a=0,b=0,c=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')a++;
            else if(s[i]=='b')b++;
            else c++;
                while(a>0&&b>0&&c>0)
                {
                    if(s[l]=='a')a--;
                    else if(s[l]=='b')b--;
                    else c--;
                    l++;
                }
              
                ans+=l;
            
        }
        return ans;
    }
};