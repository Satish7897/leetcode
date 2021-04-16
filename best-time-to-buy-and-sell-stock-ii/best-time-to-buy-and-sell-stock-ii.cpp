class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=0;
        int mi=prices[0],n=prices.size();
        for(int i=1;i<n;i++)
        {
            mi=min(mi,prices[i]);
            if(prices[i]>mi)
            {
                sum+=(prices[i]-mi);
                mi=prices[i];
            }
        }
        return sum;
    }
};