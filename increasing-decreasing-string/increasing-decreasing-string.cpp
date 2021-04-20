class Solution {
public:
    string sortString(string s) {
        
        int wordCount[26]={0};
        string ans;
        for(auto u:s)wordCount[u-'a']++;
        while(ans.size()!=s.size())
        {
            for(int i=0;i<26;i++)
            {
                if(wordCount[i])
                {
                    ans+=(char)(i+'a');
                    wordCount[i]--;
                }
            }
            for(int i=25;i>=0;i--)
            {
                if(wordCount[i])
                {
                    ans+=(char)(i+'a');
                    wordCount[i]--;
                }
            }
        }
        return ans;
        
    }
};