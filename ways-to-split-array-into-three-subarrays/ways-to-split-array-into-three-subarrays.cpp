#define mod 1000000007
class Solution {
public:
    int waysToSplit(vector<int>& nums) {
       int sum=0,n=nums.size();vector<int>pre(n,0);
        pre[0]=nums[0];
       for(int i=1;i<n;i++)
           pre[i]=pre[i-1]+nums[i];
        int i=0,j=0,k=0;
        for(i=0;i<n-2;i++)
        {   j=max(j,i+1);
            while((j<n-1&&pre[j]<2*pre[i]))
                j++;
            k=max(k,j);
            while((k<n-1 && pre[k] - pre[i] <= pre[n - 1] - pre[k]))
                k++;
            sum=(sum+k-j)%1000000007;
        }
        return sum;
        
    }
};