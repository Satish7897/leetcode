#define mod 1000000007
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();int ans[n],curIdx,fans=0;
        stack<pair<int,int>>st;
        for(int i=0;i<n;i++)
        {
            int tmp=arr[i];curIdx=i-1;
            while(st.size()&&st.top().first>arr[i])
            {
                curIdx=st.top().second;
                st.pop();
            }
            if(st.size()==0)
                tmp=((i+1)*arr[i])%mod;
            else
                tmp=((i-st.top().second)*arr[i])%mod;
            
            if(st.size())
           { tmp=(tmp+ans[st.top().second])%mod;}
            
            st.push({arr[i],i});
            ans[i]=tmp;
           
            fans=(fans+ans[i])%mod;
            
        }
        return fans;
    }
};