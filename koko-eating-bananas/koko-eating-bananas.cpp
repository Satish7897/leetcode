#define ll long long int 
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        ll ans=1000000100,l=1,r=ans;
            while(l<=r)
            {
                ll mid=(l+r)/2;
                ll ct=0;
                for(auto u:piles)
                {
                    ct+=(ceil((double)(u)/(double)(mid)));
                }
                if(ct<=h)
                {
                    ans=min(ans,mid);
                    r=mid-1;
                }
                else
                    l=mid+1;
            }
          return ans;
    }
};