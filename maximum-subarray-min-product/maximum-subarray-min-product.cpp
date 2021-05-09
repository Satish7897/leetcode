#define mod 1000000007
class Solution {
public:
    int maxSumMinProduct(vector<int>& nums) {
        int n=nums.size();long rt[n+2],lf[n+2];
        long preSum[n+2];preSum[0]=0;
        // preSum 
        for(int i=1;i<=n;i++)
            preSum[i]=preSum[i-1]+nums[i-1];
        stack<int>st;
        // leftmost index where element are not less than current
        for(int i=1;i<=n;i++)
        {
            while(st.size()&&nums[st.top()-1]>=nums[i-1])
                st.pop();
            if(st.size()==0)lf[i]=0;
            else lf[i]=st.top();
            st.push(i);
        }
        while(st.size())
            st.pop();
        //rightMost index where element are not less than current
        for(int i=n;i>=1;i--)
        {
            while(st.size()&&nums[st.top()-1]>=nums[i-1])
                st.pop();
            if(st.size()==0)rt[i]=n;
            else rt[i]=st.top()-1;
            st.push(i);
        }
        long ans=0;
        for(int i=1;i<=n;i++)
            {
          long tmp=(nums[i-1]*(preSum[rt[i]]-preSum[lf[i]]));
           ans=max(ans,tmp);
        }
        int z=ans%mod;
        return z;
            
    }
};