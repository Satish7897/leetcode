class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='c')
            {
                if(st.size()>1&&st.top()=='b')
                {
                    st.pop();
                    if(st.top()=='a')
                        st.pop();
                    else
                       { st.push('b');st.push('c');}
                }
                else
                    st.push('c');
            }
            else
                st.push(s[i]);
        }
        return st.size()==0;
        
    }
};