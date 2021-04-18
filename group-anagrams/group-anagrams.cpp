class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++)
        {
            string tmp=strs[i];
            sort(tmp.begin(),tmp.end());
            mp[tmp].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto u:mp)
            ans.push_back(u.second);
        return ans;
    }
};