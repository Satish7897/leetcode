int sz;
class Solution {
    vector<int>used;
    bool dfs(int idx,vector<int>&ans,vector<int>used)
    {
        if(idx==ans.size())return true;
        if(ans[idx])return dfs(idx+1,ans,used);
        for(int i=sz;i>=1;i--)
        {
            if(used[i])continue;
            if(i!=1&&(idx+i>=ans.size()||ans[i+idx]))continue;
           used[i]=1;
            ans[idx]=i;
            if(i!=1)ans[i+idx]=i;
            if(dfs(idx+1,ans,used))return true;
            used[i]=0;
            ans[idx]=0;
            if(i!=1)
                ans[i+idx]=0;
            
        }
        return false;
    }
public:
    vector<int> constructDistancedSequence(int n) {
        used.assign(n+1,0);
        vector<int>ans(2*n-1);
        sz=n;
        dfs(0,ans,used);
        return ans;
    }
};