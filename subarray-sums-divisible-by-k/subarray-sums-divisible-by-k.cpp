class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        map<int,int>mp;
        mp[0]=1;int ans=0,preSum=0;
        for(auto u:A)
        { 
            //twice mod 
            int md=(K+(u+preSum)%K)%K;
            preSum+=u;
            ans+=mp[md];
            mp[md]++;
        }
        return ans;
    }
};