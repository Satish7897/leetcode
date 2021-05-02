class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==')')
            {   
                reverse(s.begin()+st.top()+1,s.begin()+i);
                st.pop();
            }
            else if(s[i]=='(')
                st.push(i);
                
        }
        cout<<s;
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=')'&&s[i]!='(')
                ans+=s[i];
        }
        return ans;
    }
};