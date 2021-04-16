class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,mi=prices[0];
        for(int i=1;i<prices.size();i++)
        { 
            if(prices[i]-mi>=0)
            {
                ans=max(ans,prices[i]-mi);
            }
            mi=min(mi,prices[i]);
           // cout<<ans<<"\n";
        }
        return ans;
    }
};