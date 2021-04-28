class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inv) {
        sort(inv.begin(),inv.end(),[](vector<int>&a,vector<int>&b){
            if(a[0]==b[0])
                return a[1]<b[1];
            return a[0]<b[0];
        });
        vector<vector<int>>ans;
        ans.push_back({inv[0][0],inv[0][1]});
        for(int i=1;i<inv.size();i++)
        {  int sz=ans.size()-1;
            if(inv[i][0]<=ans[sz][1])
            {
                ans[sz][0]=min(ans[sz][0],inv[i][0]);
                ans[sz][1]=max(ans[sz][1],inv[i][1]);
            }
            else
                ans.push_back({inv[i][0],inv[i][1]});
        }
        return ans;
    }
};