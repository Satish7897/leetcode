class comp{
    public:
    bool operator()(pair<int,string>p1,pair<int,string>p2)
    {
            if(p1.first==p2.first)
                return p1.second>p2.second;
            return p1.first<p2.first;
        }
};
class Solution {
    
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        for(auto u:words)
            mp[u]++;
        priority_queue<pair<int,string>,vector<pair<int,string>>,comp>pq;
        for(auto u:mp)
         pq.push({u.second,u.first});
        vector<string>ans;
        while(k)
        {
            k--;
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};