class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>tmp;tmp.push_back(0);
        dfs(0,graph.size()-1,ans,tmp,graph);
        return ans;
    }
    void dfs(int src,int des,vector<vector<int>>&ans,vector<int>tmp,vector<vector<int>>& graph)
    {
        if(src==des)
        {
            ans.push_back(tmp);
            return ;
        }
        for(auto u:graph[src])
        {
            tmp.push_back(u);
            dfs(u,des,ans,tmp,graph);
            tmp.pop_back();
        }
    }
    
};