class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int ev=0,od=0;
        for(auto u:position)
        {
            if(u%2==0)ev++;
            else od++;
        }
        return min(ev,od);
    }
};