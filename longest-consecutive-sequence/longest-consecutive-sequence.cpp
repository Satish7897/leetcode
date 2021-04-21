class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto u:nums)
            mp[u]=1;
        int ans=0;
        for(auto u:nums)
        {
            if(!mp[u-1])
            {
                int ct=0;
                while(mp[u])
                {u++;ct++;}
                ans=max(ans,ct);
            }
        }
        return ans;
    }
};