class Solution {
public:
    bool canJump(vector<int>& nums) {
        int k=nums[0];
       for(int i=0;i<nums.size()-1;i++)
       {
          k--;
          k=max(k,nums[i]);
           if(k<=0)return false;
           
       }
        return true;
    }
};