class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
     
        int p2=cost[0],p1=cost[1];
        for(int i=2;i<n;i++)
        {
           int x=cost[i]+min(p1,p2);
            p2=p1;
            p1=x;
        }
        return min(p1,p2);
    }
};