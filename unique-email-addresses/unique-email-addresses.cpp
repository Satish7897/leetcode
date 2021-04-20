class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>st;
        for(auto u:emails)
        {
            string tmp;int f=0,ig=0,nc=0;
            for(int i=0;i<u.size();i++)
            {
               if(u[i]=='+')
                   ig=1;
                else if(u[i]=='@')
                {
                    ig=0;
                    tmp+='@';
                    nc=1;
                }
                else if(nc)
                    tmp+=u[i];
                else if(!ig&&u[i]!='.')
                    tmp+=u[i];
            }
            st.insert(tmp);
        }
        for(auto u:st)
            cout<<u<<"\n";
        return st.size();
        
    }
};