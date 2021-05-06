class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int n=heaters.size();
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int ans=0;
         for(auto u:houses)
         {
             int idx=lower_bound(heaters.begin(),heaters.end(),u)-heaters.begin();
             int x=10000000001,y=x;
             if(idx-1>=0)
                 x=abs(u-heaters[idx-1]);
             if(idx!=n)
                 y=abs(u-heaters[idx]);
             ans=max(ans,min(x,y));
         }
        return ans;
            
        
    }
};