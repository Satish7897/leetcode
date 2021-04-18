class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        int ans=0,tmpAns=0,len=0,mx=-1;
        for(int i=0;i<s.size();i++)
        {
            if(i!=0&&s[i]!=s[i-1])
            {
                if(len==1)
                {
                    mx=-1;
                    tmpAns=0;
                    len=0;
                }
                else
                {
                    ans+=(tmpAns-mx);
                    tmpAns=0;
                    mx=-1;
                    len=0;
                }
            }
               mx=max(mx,cost[i]);
                len++;
                tmpAns+=cost[i];
            
             cout<<ans;
        }
       
        if(len!=1)
            ans+=(tmpAns-mx);
        return ans;
    }
};