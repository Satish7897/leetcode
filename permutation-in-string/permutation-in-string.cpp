class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>tar(26,0);
        vector<int>tmp(26,0);
        int ct=0,st=0;
        for(auto u:s1)
          {  tar[u-'a']++;if(tar[u-'a']==1)ct++;}
        int c=0;
        for(auto u:s2)
        { 
            while(tmp[u-'a']+1>tar[u-'a'])
            {
               int id=s2[st]-'a';
                if(tmp[id]!=0&&tmp[id]==tar[id])
                    c--;
                tmp[id]--;
                st++;
                    
            }
            tmp[u-'a']++;
            if(tmp[u-'a']!=0&&(tmp[u-'a']==tar[u-'a']))
                c++;
            cout<<u<<" "<<tmp[u-'a']<<" "<<tar[u-'a']<<c<<"\n";
            if(c==ct)
                return true;
        }
        return false;
        
        
    }
};