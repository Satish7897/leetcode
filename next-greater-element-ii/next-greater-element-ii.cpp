class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            while(st.size()&&st.top()<nums[i])
            {st.pop();}
            if(st.size()&&st.top()>nums[i])
                ans[i]=st.top();
            st.push(nums[i]);
            
        }
        for(int i=n-1;i>=0;i--)
        { 
            while(st.size()&&st.top()<=nums[i])
            {st.pop();}
          //  cout<<st.top()<<"\n";
            if(st.size()&&st.top()>nums[i])
                ans[i]=st.top();
            st.push(nums[i]);
            
        }
        return ans;
    }
};