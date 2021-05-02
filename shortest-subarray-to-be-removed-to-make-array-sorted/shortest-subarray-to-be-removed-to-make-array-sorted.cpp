class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n=arr.size(),idx=0,ans=0;if(n==1)return 0;
        for(int i=n-1;i>=1;i--)
        {
            if(arr[i]<arr[i-1])
            {
                idx=i;break;
            }
            
        }
        //cout<<idx;
        if(idx==0)return 0;
        ans=n-idx;
        int id=lower_bound(arr.begin()+idx,arr.end(),arr[0])-arr.begin();
        ans=max(ans,n-id+1);
       
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=arr[i-1])
            {
              int id=lower_bound(arr.begin()+idx,arr.end(),arr[i])-arr.begin();
                ans=max(ans,i+1);
            
              if(id!=n)
              {
                  ans=max(ans,n-id+i+1);
              }
             
            }
            else break;
           
        }
       // cout<<idx;
        return n-ans;
    }
};