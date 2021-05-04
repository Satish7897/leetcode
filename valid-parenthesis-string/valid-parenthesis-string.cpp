class Solution {
public:
    bool checkValidString(string s) {
       stack<int>op,st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')op.push(i);
            else if(s[i]=='*')st.push(i);
            else
            {
                if(op.size())op.pop();
                else if(st.size())st.pop();
                else
                    return false;
            }
        }
        if(st.size()<op.size())return false;
        while(op.size())
        {
            while(st.size()&&st.top()<op.top())
            {
                st.pop();
            }
            if(st.size()==0)return false;
            op.pop();
            st.pop();
        }
        return true;
    }
};