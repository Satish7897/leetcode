class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        vector<int>mp(121,0);
        for(int u:ages)
            mp[u]++;
        int ans=0;
        for(int i=15;i<=120;i++)
        {   int sum=0;
            if(mp[i]==0)continue;
            for(int j=(i/2)+8;j<=i;j++)
                sum+=mp[j];
         
          ans+=mp[i]*sum-mp[i];
        
        }
        return ans;
    }
};