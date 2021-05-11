class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>tmp;
        vector<bool>vis(n,false);
        solve(ans,tmp,vis,nums,n);
        return ans;
    }
    void solve(vector<vector<int>>&ans,vector<int>tmp,vector<bool>vis,vector<int>nums,int n)
    {
        if(tmp.size()==n)
        {
            ans.push_back(tmp);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                tmp.push_back(nums[i]);
                vis[i]=true;
                solve(ans,tmp,vis,nums,n);
                tmp.pop_back();
                vis[i]=false;
            
            }
        }
    }
};