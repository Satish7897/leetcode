class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        int ans=0;
        for(int i=0;i<n;i++)
            ans=max(ans,dfs(i,manager,informTime));
        return ans;
    }
    int dfs(int src, vector<int>& manager, vector<int>& informTime)
    {
        if(manager[src]==-1)return informTime[src];
        informTime[src]+=dfs(manager[src],manager,informTime);
        manager[src]=-1;
        return informTime[src];
    }
};