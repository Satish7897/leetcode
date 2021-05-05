class Solution {
public:
    string findReplaceString(string s, vector<int>& idx, vector<string>& src, vector<string>& tar) {
        int n=s.size();string ans;
        for(int i=0;i<n;i++)
        { int k;
            for(k=0;k<idx.size();k++)
               if(idx[k]==i)break;
            if(k<src.size()&&n-idx[k]>=src[k].size())
            {
                string tmp=s.substr(idx[k],src[k].size());
                if(tmp==src[k])
                  {  ans+=tar[k];
                   i+=src[k].size()-1;
                  }
                else
                    ans+=s[i];
                
            }
           else
               ans+=s[i];
           
        }
        return ans;
    }
};