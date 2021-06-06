class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int pre[m+1],cur[m+1],ans=0;
        for(int i=0;i<=n;i++)
           { for(int j=0;j<=m;j++)
                {if(i==0||j==0)
                    cur[j]=0;
                else if(nums1[i-1]==nums2[j-1])
                    cur[j]=1+pre[j-1];
                else
                    cur[j]=0;
                    ans=max(ans,cur[j]);}
             for(int j=0;j<=m;j++)
                 pre[j]=cur[j];
           }
        
        return ans;
    }
};