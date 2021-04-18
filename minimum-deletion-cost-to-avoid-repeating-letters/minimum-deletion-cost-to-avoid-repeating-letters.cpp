class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        int ans=0,tmpAns=cost[0],len=1,mx=cost[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!=s[i-1])
            {
                   ans+=(tmpAns-mx);
                    tmpAns=0;
                    mx=-1;
                    len=0;
             }
               mx=max(mx,cost[i]);
                len++;
                tmpAns+=cost[i];
            
            // cout<<ans;
        }
       
        if(len!=1)
            ans+=(tmpAns-mx);
        return ans;
    }
};