int ans;

class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>>vp;
        ans=0;
         int dp[1001],n=scores.size();
        for(int i=0;i<scores.size();i++)
           vp.push_back({ages[i],scores[i]});
        sort(vp.begin(),vp.end(),greater<>());
        for(int i=0;i<n;i++)
        {  dp[i]=vp[i].second;
            for(int j=0;j<i;j++)
            {
                if(vp[j].second>=vp[i].second)
                    dp[i]=max(dp[i],dp[j]+vp[i].second);
            }
         ans=max(ans,dp[i]);
        }
        
        return ans;
        
    }
};