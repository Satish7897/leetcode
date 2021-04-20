class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int al[26];memset(al,0,sizeof(al));
        for(auto u:text)
            al[u-'a']++;
        string s="balloon";
        
        al[11]/=2;
        al[14]/=2;
        int ans=al[1];
        for(auto u:s)
            ans=min(ans,al[u-'a']);
        return ans;
        
    }
};