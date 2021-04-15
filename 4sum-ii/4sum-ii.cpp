#define ll long long int
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        map<ll,ll>mp;
        for(auto u:nums1)
        {
            for(auto v:nums2)
            {mp[u+v]++;}
        }
        int ct=0;
        for(auto u:nums3)
        {
            for(auto v:nums4)
            {
                ct+=mp[-(u+v)];
            }
        }
        return ct;
        
    }
};