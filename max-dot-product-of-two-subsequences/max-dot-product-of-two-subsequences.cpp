
class Solution {
    vector<vector<vector<int>>> dp;
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
       dp.resize(nums1.size()+1,vector<vector<int>>(nums2.size()+1,vector<int>(2,INT_MIN)));
        return solve(nums1,nums2,0,0,0);
    }
    int solve(vector<int>& nums1, vector<int>& nums2,int idx1,int idx2,int f)
    {   if((idx1==nums1.size()||idx2==nums2.size())&&f==0)
         return -2000000;
        if(idx1==nums1.size()||idx2==nums2.size())
            return 0;
        if(dp[idx1][idx2][f]!=INT_MIN)return dp[idx1][idx2][f];
        return dp[idx1][idx2][f]=max(nums1[idx1]*nums2[idx2]+solve(nums1,nums2,idx1+1,idx2+1,1),
                                  max(solve(nums1,nums2,idx1+1,idx2,f),solve(nums1,nums2,idx1,idx2+1,f)));
        
    }
};