class Solution {
public:
    string freqAlphabets(string s) {
        string ans;
        for(int i=s.size()-1;i>=0;i--)
        {
         if(s[i]=='#')
         {
             int x=s[i-1]-'0';
             x=x+(s[i-2]-'0')*10;
             ans+=(x+'a'-1);
             i--;
             i--;
         }
         else
         {
             ans+=(s[i]-'0'+'a'-1);
         }
        
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};