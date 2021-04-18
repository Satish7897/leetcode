class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        int al[26];memset(al,0,sizeof(al));
        for(int i=0;i<strs.size();i++)
        {
           string tmp;
            for(auto u:strs[i])
                al[u-'a']++;
           for(int j=0;j<26;j++)
           {
               while(al[j])
               {
                   al[j]--;
                   tmp+=(char)(j+'a');
               }
           }
          
            mp[tmp].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto u:mp)
            ans.push_back(u.second);
        return ans;
    }
};