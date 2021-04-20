class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string>ans;
        string tmp;int ct=0;
        for(int i=0;i<=s.size();i++)
        {
           if(i==s.size()||s[i]==' ')
           {
               for(int i=0;i<tmp.size();i++)
               { string t;
                   if(ans.size()<=i)
                       ans.push_back(t);
                while(ans[i].size()!=ct)
                    ans[i]+=' ';
                ans[i]+=tmp[i];
                
               }
               tmp.clear();
               ct++;
           }
            else
                tmp+=s[i];
        }
        return ans;
    }
};