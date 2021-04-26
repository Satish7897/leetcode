class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<pair<int,int>>v;
       int lidx=-1;
       int ridx=-1;
         int mi=INT_MAX,mx=INT_MIN;
      for(int i=1;i<nums.size();i++)
      {
          if(nums[i]<nums[i-1])
          {mi=min(mi,nums[i]);}
      }
      for(int i=nums.size()-2;i>=0;i--)
      {
          if(nums[i]>nums[i+1])
          {mx=max(mx,nums[i]);}
      }
      if(mx==INT_MIN||mi==INT_MIN)return 0;
     int n=nums.size();
      for(int i=n-1;i>=0;i--)
      {
          if(nums[i]>mi)
          {
              lidx=i;
          }
      }
      for(int i=0;i<n;i++)
      {
          if(nums[i]<mx)
          {
              ridx=i;
          }
      }
      
        cout<<lidx<<" "<<ridx;
        return (ridx-lidx+1);
        
    }
};