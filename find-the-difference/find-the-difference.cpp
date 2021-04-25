class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int a1[26]={0},a2[26]={0};
        for(auto u:s)
            a1[u-'a']++;
        for(auto u:t)
            a2[u-'a']++;
        char c;
          for(int i=0;i<26;i++)
           { if(a1[i]<a2[i])
               c= (char)(i+'a');
           }
        return c;
    }
};