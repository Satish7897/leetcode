#define ld double
class Solution {
 bool check(int sum,int k,int tr)
 {
     ld x=(ld)sum/(ld)k;
     if(x>=(ld)tr)
         return true;
     return false;
 }
public:
    int numOfSubarrays(vector<int>& arr, int k, int tr) {
       int cnt=0,sz=arr.size();
       for(int i=1;i<sz;i++)
           arr[i]+=arr[i-1];
       if(check(arr[k-1],k,tr))cnt++;
       for(int i=k;i<sz;i++)
       {
           if(check(arr[i]-arr[i-k],k,tr))
               cnt++;
       }
        return cnt;
      
    }
};