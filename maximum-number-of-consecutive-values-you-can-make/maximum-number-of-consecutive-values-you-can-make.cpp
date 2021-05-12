class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
     int mx=1;
    sort(coins.begin(),coins.end());
        for(auto u:coins)
            if(u<=mx)
                mx+=u;
    return mx;
    }
};