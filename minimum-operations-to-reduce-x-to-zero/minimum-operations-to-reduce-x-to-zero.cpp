class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();int ans=INT_MAX;int preSum=0;int lsum=0;int l=0;
       
        for(int u:nums)
        {  
          if(preSum<x)
            preSum+=u;
           if(preSum>=x) break;
            l++;
        }
     
       
        if(l==n)return -1;
        if(preSum==x)ans=l+1;
        for(int i=n-1;i>=0;i--)
        { 
            lsum+=nums[i];
            if(lsum>x)break;
            int req=x-lsum;
            while(l>=0&&l<i&&preSum>req)
            {
                preSum-=nums[l];
                l--;
            }
            if(l==-1&&lsum==x)ans=min(ans,n-i);
            else if(l!=-1&&preSum+lsum==x)ans=min(ans,l+1+n-i);
        }
        return ans==INT_MAX?-1:ans;
        
    }
};