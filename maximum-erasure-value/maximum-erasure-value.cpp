class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int al[10001]={0},ans=0,tmp=0,st=0;
        for(int i=0;i<nums.size();i++)
        {
            while(al[nums[i]]>0)
            {
                tmp-=nums[st];
                al[nums[st]]--;
                st++;
            }
            tmp+=nums[i];
            al[nums[i]]++;
            ans=max(ans,tmp);

        }
        return ans;
    }
};