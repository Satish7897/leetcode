class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int id1=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(n==0||id1==n||nums[id1]!=target)
            id1=-1;
        int id2=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        id2--;
        if(n==0||id2<0||nums[id2]!=target)
            id2=-1;
        return {id1,id2};
    }
};