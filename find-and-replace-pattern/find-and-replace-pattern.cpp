class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pat) {
        vector<string>ans;
        for(auto u:words)
        {
            int al[26];memset(al,-1,sizeof(al));
            int pt[26];memset(pt,-1,sizeof(pt));
            int f=0;
            for(int i=0;i<u.size();i++)
            {
                if(al[u[i]-'a']==-1&&pt[pat[i]-'a']==-1)
                    {al[u[i]-'a']=pat[i]-'a';pt[pat[i]-'a']=u[i]-'a';}
                else if(al[u[i]-'a']!=pat[i]-'a'||pt[pat[i]-'a']!=u[i]-'a')
                {
                    f=1;break;
                }
            }
            if(!f)ans.push_back(u);
        }
        return ans;
    }
};