class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i+1;
        }
        if(mp[target])return mp[target]-1;
      return -1;
    }
};