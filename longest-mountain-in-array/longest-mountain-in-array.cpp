class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        vector<int>lf(n,1);
        vector<int>rt(n,1);
        int ans=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
                lf[i]=lf[i-1]+1;
        }
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>arr[i+1])
                rt[i]=rt[i+1]+1;
        }
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
                ans=max(ans,lf[i-1]+rt[i+1]+1);
        }
        for(int i=0;i<n;i++)
            cout<<lf[i]<<" "<<rt[i]<<"\n";
        return ans;
        
    }
};