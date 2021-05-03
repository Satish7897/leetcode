class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int n=s.size(),m=p.size();
        if(m>n)return ans;
        int tar[26],chc[26],ct=0;
        for(int i=0;i<26;i++)
        {tar[i]=0,chc[i]=0;}
        for(auto u:p)tar[u-'a']++;
        for(int i=0;i<n;i++)
        {int cur=s[i]-'a';
            if(i<m)
                chc[cur]++;
           else
           {
               chc[cur]++;
               chc[s[i-m]-'a']--;
           }
           int f=0;
         for(int j=0;j<26;j++)
         {
             if(chc[j]!=tar[j])f=1;
         }
         cout<<f;
         if(!f)ans.push_back(i-m+1);
        }
        return ans;
    }
};