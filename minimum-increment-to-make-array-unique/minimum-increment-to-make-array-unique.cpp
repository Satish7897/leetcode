class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
        int mp[50001],ct=0;
        memset(mp,0,sizeof(mp));
        for(auto u:A)
            mp[u]++;
        for(int i=0;i<=50000;i++)
        {
            if(mp[i]>1)
            {
                ct+=(mp[i]-1);
                mp[i+1]+=(mp[i]-1);
            }
        }
        return ct;
    }
};