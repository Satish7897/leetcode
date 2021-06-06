class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>ans;
        for(int u:nums)
        {
            auto idx=lower_bound(ans.begin(),ans.end(),u);
            if(idx==ans.end())
                ans.push_back(u);
            else
                *idx=u;
        }
        return ans.size();
    }
};