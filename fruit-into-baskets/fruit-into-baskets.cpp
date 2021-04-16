class Solution {
public:
    int totalFruit(vector<int>& tr) {
        int sIdx=0,ans=0,ct=0,n=tr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp[tr[i]]==0)
            {ct++;}
            mp[tr[i]]++;
             while(ct>2)
              {
                    mp[tr[sIdx]]--;
                    if(mp[tr[sIdx]]==0)
                        ct--;
                    sIdx++;
              }
            ans=max(ans,i-sIdx+1);
                
            }
            return ans;
        }
     
    
};