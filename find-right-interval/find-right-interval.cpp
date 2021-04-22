class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& inv) {
        map<int,int>mp;int n=inv.size();
        for(int i=0;i<n;i++)
            mp[inv[i][0]]=i;
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
           auto idx=mp.lower_bound(inv[i][1]);
            if(idx==mp.end())ans[mp[inv[i][0]]]=-1;
            else
                ans[mp[inv[i][0]]]=idx->second;
        }
        return ans;
    }
};