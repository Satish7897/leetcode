class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>cnt;
        cnt[0]=1;int sum=0;
        for(int i=0;i<nums.size();i++)
        {   if(i!=0)nums[i]+=nums[i-1];
            sum+=cnt[nums[i]-k];
          cnt[nums[i]]++;
        // cout<<sum<<"\n";
        }
        return sum;
    }
};