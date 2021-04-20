class Solution {
public:
    string customSortString(string S, string T) {
       int wordT[26]={0};
       for(auto u:T)wordT[u-'a']++;
       string ans;
       for(auto u:S)
       {
           while(wordT[u-'a'])
           {
               wordT[u-'a']--;
               ans+=u;
           }
       }
       for(int i=0;i<26;i++)
       {
           while(wordT[i])
           {
               ans+=(char)(i+'a');
               wordT[i]--;
           }
       }
        return ans;
    }
};