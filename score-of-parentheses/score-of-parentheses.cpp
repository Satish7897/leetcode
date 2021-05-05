class Solution {
public:
    int scoreOfParentheses(string s) {
        int n=s.size();
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')st.push(-1);
            else if(s[i]==')')
            {
                int sum=0;
                while(st.top()!=-1)
                {
                    sum+=st.top();
                    st.pop();
                }
                st.pop();
                if(sum==0)st.push(1);
                else st.push(sum*2);
            }
        }
        int ans=0;
        while(st.size())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};