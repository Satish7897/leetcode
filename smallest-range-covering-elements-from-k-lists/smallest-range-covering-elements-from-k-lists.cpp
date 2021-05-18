class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<pair<int,int>>vp;
        int k=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            for(auto u:nums[i])
                vp.push_back({u,i});
        }
        sort(vp.begin(),vp.end());
        int l=0,r=0,ct=0,n=vp.size(),ans=INT_MAX;
        vector<int>response(2);
        unordered_map<int,int>mp;
       
        while(r<n)
        {
            while(ct<k&&r<n)
            {
                if(mp[vp[r].second]==0)ct++;
                mp[vp[r].second]++;
                r++;  
            }
           
            while(ct>=k&&l<n)
            {
              int x=abs(vp[l].first-vp[r-1].first);
              if(x<ans)
              {
                  ans=x;
                  response[0]=vp[l].first;
                  response[1]=vp[r-1].first;
              }
             if(mp[vp[l].second]==1)
                ct--;
              mp[vp[l].second]--;
            l++;
            }
         
        }
        return response;
    }
};