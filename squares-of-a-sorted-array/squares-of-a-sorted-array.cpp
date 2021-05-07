#define pb push_back
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            if(l==r)
            {ans.push_back(nums[l]*nums[l]);break;}
            if(abs(nums[l])<abs(nums[r]))
            {
                ans.push_back(nums[r]*nums[r]);
                r--;
            }
            else
              {  
                ans.push_back(nums[l]*nums[l]);
                l++;
              }
                
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};