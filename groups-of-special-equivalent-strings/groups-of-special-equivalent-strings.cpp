class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        int ct=0;
        map<string,int>mp;
        for(auto u:A)
        { string od,ev;
            for(int i=0;i<u.size();i++)
            {
                if(i%2)od+=u[i];
                else ev+=u[i];
            }
         sort(od.begin(),od.end());
         sort(ev.begin(),ev.end());
         string ans=ev+od;
         if(!mp[ans])
             ct++;
         mp[ans]++;
        }
        return ct;
        
    }
};