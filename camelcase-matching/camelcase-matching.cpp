bool isUpper(char c)
{
    return c>='A'&&c<='Z';
}
class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool>ans;
        int n=pattern.size();
        for(auto u:queries)
        {
            int j=0,f=0;
            for(int i=0;i<u.size();i++)
            {
               if(isUpper(u[i]))
               {
                   if(j==n)f=1;
                   else if(pattern[j]==u[i])
                       j++;
                   else
                       f=1;
               }
               else
               {
                   if(pattern[j]==u[i])
                       j++;
               }
                   
            }
            if(f||j!=n)ans.push_back(false);
            else ans.push_back(true);
        }
        return ans;
    }
};