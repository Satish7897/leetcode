class Solution {
public:
    string removeKdigits(string num, int k) {
        string st="";
        for(char c:num)
        {
            while(st.size()&&k&&st.back()>c)
            {
                st.pop_back();
                k--;
            }
            st+=c;
            if(st.size()==1&&st[0]=='0')
                st.pop_back();
        }
        
        return st.size()>k?st.substr(0,st.size()-k):"0";
        
       
    }
};