class Solution {
public:
    int minSteps(string s, string t) {
        int wordS[26],wordT[26];
        for(int i=0;i<26;i++)
        {
            wordS[i]=0;
            wordT[i]=0;
        }
        for(auto u:s)
            wordS[u-'a']++;
        for(auto u:t)
            wordT[u-'a']++;
        int ans=0;
        for(int i=0;i<26;i++)
        {
            if(wordT[i]>wordS[i])
                wordT[i]-=wordS[i];
            else
                wordT[i]=0;
            ans+=wordT[i];
        }
        return ans;
    }
};