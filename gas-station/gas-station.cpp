class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
     int n=gas.size();int total=0,tmp=0,idx=0;
        for(int i=0;i<n;i++)
        {
            total+=(gas[i]-cost[i]);
            tmp+=(gas[i]-cost[i]);
            if(tmp<0)
            {
                tmp=0;
                idx=i+1;
            }
            
        }
        if(total<0)return -1;
        else return idx;
        
    }
};