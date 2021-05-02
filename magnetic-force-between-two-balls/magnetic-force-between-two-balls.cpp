class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        long l=1,r=1000000000;
        int ans=0,n=position.size();
        sort(position.begin(),position.end());
        while(l<=r)
        {
            int mid=(l+r)/2;
            int ct=1,idx=position[0]+mid;
            for(int i=1;i<n;i++)
            {
                if(position[i]>=idx)
                {
                    ct++;
                    idx=position[i]+mid;
                }
            }
            if(ct>=m)
            {  // cout<<ct<<" "<<mid<<"\n";
                ans=max(ans,mid);
                l=mid+1;
            }
            else
                r=mid-1;
        }
        return ans;
    }
};