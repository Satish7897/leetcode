class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m=nums2.size();
        vector<int>ans(m,-1);
        stack<pair<int,int>>st;
        int idx[10001];
        for(int i=0;i<m;i++)
        {
            while(st.size()&&st.top().first<nums2[i])
                {ans[st.top().second]=nums2[i];st.pop();}
            st.push({nums2[i],i});
            idx[nums2[i]]=i;
        }
        vector<int>fans;
        for(int i=0;i<nums1.size();i++)
        fans.push_back(ans[idx[nums1[i]]]);
        
        return fans;
            
    }
};