class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size(),ans=INT_MAX,sum=0,lsum=0;
        vector<int>preSum;
        for(auto u:nums)
        {
            sum+=u;
            preSum.push_back(sum);
        }
        int l=lower_bound(preSum.begin(),preSum.end(),x)-preSum.begin();
       
        if(l==n)return -1;
        if(preSum[l]==x)ans=l+1;
        for(int i=n-1;i>=0;i--)
        { 
            lsum+=nums[i];
         if(lsum>x)break;
            int req=x-lsum;
            while(l>=0&&l<i&&preSum[l]>req)
                l--;
            if(l==-1&&lsum==x)ans=min(ans,n-i);
            else if(l!=-1&&preSum[l]+lsum==x)ans=min(ans,l+1+n-i);
        }
        return ans==INT_MAX?-1:ans;
        
    }
};