class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int ans=1,n=arr.size();
        vector<int>dp(n,1);
        if(n>1&&arr[0]!=arr[1]){dp[1]=2;ans=2;}
        for(int i=2;i<n;i++)
        {
            if(arr[i]>arr[i-1]&&arr[i-1]<arr[i-2])
                dp[i]=dp[i-1]+1;
            else if(arr[i]<arr[i-1]&&arr[i-1]>arr[i-2])
                dp[i]=dp[i-1]+1;
            else if(arr[i]!=arr[i-1])
                dp[i]=2;
            else
                dp[i]=1;
            ans=max(ans,dp[i]);
        
        }
        return ans;
    }
};