class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>tmp;
        solve(0,tmp,ans,nums);
        return ans;
    }
private:
    void solve(int idx,vector<int>tmp,vector<vector<int>>&ans,vector<int>nums)
    {   ans.push_back(tmp);
        
        for(int i=idx;i<nums.size();i++)
        {  
            tmp.push_back(nums[i]);
            solve(i+1,tmp,ans,nums);
         tmp.pop_back();
        }
    }
};