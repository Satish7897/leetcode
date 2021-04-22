class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       vector<int>ans;
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        vector<int>::iterator ip=unique(nums1.begin(),nums1.begin()+n);
    
        for(auto u:nums1)
            cout<<u<<' ';
        sort(nums2.begin(),nums2.end());
        nums1.resize(std::distance(nums1.begin(), ip));
        int i=0,j=0;int n1=nums1.size(),n2=nums2.size();
       // cout<<*ip;
        while(i<n1&&j<n2)
        {    
            if(nums1[i]==nums2[j])
            {ans.push_back(nums1[i]);i++;j++;}
            else if(nums1[i]>nums2[j])
                j++;
            else
                i++;
        }
        return ans;
    }
};