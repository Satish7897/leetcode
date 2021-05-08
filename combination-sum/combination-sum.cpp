class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& can, int target) {
        vector<vector<int>>ans;
        vector<int>one;
        solve(can,ans,one,target,0);
        return ans;
    }
    void solve(vector<int>can,vector<vector<int>>&res,vector<int>ans,int target,int i)
    {
        if(target==0)
        {
            res.push_back(ans);
            return;
        }
        for(int j=i;j<can.size();j++)
        {  int u=can[j];
            if(u<=target)
            {
            ans.push_back(u);
            solve(can,res,ans,target-u,j);
            ans.pop_back();
            }
        }
    }
};