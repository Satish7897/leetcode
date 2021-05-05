class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int x=target-nums[i];
            if(mp.find(x)!=mp.end())
            {
                ans.push_back(i);
                ans.push_back(mp[x]-1);
                break;
            }
            mp[nums[i]]=i+1;
            
        }
        return ans;
            
    }
};