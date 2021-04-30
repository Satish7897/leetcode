class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int f=0,ct=1,idx=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                if(f==0)
                    {ct++;nums[idx]=nums[i];idx++;}
                 f=1;
            }
            else
            {   nums[idx]=nums[i];
                idx++;
                ct++;
                f=0;
            }
            //cout<<ct<<"\n";
        }
        cout<<ct;
        return ct;
        
    }
};