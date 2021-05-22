class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto u:nums)
            mp[u]++;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second)
            {   int ct=it->second;
              // cout<<it->first<<it->second<<"\n";
                for(int cnt=1;cnt<k;cnt++)
                {
                    if(mp[it->first+cnt]<ct)
                        return false;
                    mp[it->first+cnt]-=ct;
                }
            }
        }
        return true;
        
    }
};