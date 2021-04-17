class Solution {
public:
    int maxSatisfied(vector<int>& csts, vector<int>& grumpy, int k) {
        int sum=0,fix=0;
        for(int i=0;i<csts.size();i++)
        {
            if(grumpy[i]==0)
            {fix+=csts[i];csts[i]=sum;}
            else
                csts[i]+=sum;
            sum=csts[i];
                
        }
        int ans=csts[k-1];
        for(int i=k;i<csts.size();i++)
        {
           ans=max(ans,csts[i]-csts[i-k]);
        }
        return fix+ans;
    }
};