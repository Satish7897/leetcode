class Solution {
public:
    string reverseWords(string s) {
        string ans,tmp;
        for(int i=0;i<=s.size();i++)
        {
            if(i==s.size()||s[i]==' ')
            {
                for(int j=tmp.size()-1;j>=0;j--)
                    ans+=tmp[j];
                if(i!=s.size())
                ans+=' ';
                
              tmp.clear();
            }
            else
            {
                tmp+=s[i];
            }
        }
        return ans;
    }
};