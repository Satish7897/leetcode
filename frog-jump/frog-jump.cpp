class Solution {
public:
    bool canCross(vector<int>& stones) {
        unordered_map<int,set<int>>mp;
        mp[0].insert(0);
        for(auto u:stones)
        {  
            for(auto v:mp[u])
            { 
                for(int k=v-1;k<=v+1;k++)
                {
                  if(k>0)
                      mp[u+k].insert(k);
                }
            }

        }
        int last=stones[stones.size()-1];
        if(mp[last].size())
       return true;
        return false;
       
    }
};