class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        unordered_map<int,int>mp;int midx=-1,ct=0,sum=0,tmp=0;
        
        for(int i=0;i<nums.size();i++)
        {  
           tmp+=nums[i];
           nums[i]=(tmp);
           nums[i]-=sum;
          if(nums[i]==target)
          {midx=i,sum=tmp;ct++;}
          else if(mp.find(nums[i]-target)!=mp.end())
          {  if(mp[nums[i]-target]>midx)
             { midx=i;
              ct++;
              sum=tmp;}
          }
            mp[nums[i]]=i;
           // cout<<tmp<<" "<<sum<<" "<<nums[i]<<" "<<ct<<"\n";
        }
        return ct;
        
    }
};