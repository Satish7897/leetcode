class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        mp[0]=0;
        int df=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)df++;
            else df--;
            if(df==0)ans=i+1;
            if(mp.find(df)!=mp.end())
            {   
                ans=max(ans,i+1-mp[df]);
            }
            else
                mp[df]=i+1;
            cout<<mp[df];
        }
        return ans;
    }
};