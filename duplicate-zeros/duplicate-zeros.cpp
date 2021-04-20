class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
       vector<int>ans(n);
        int idx=0;
      for(int i=0;i<arr.size();i++)
      {   ans[idx]=arr[i];
      
          if(arr[i]==0)
          {
             idx++;
              if(idx==n)break;
              ans[idx]=0;
          }
        idx++;
       if(idx==n)break;
      }
        arr=ans;
    }
};