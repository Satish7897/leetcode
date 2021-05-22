class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto u:arr)
            mp[u]++;
        for(auto it=mp.begin();it!=mp.end();it++)
        pq.push(it->second);
        
        while(k)
        {
            int x=pq.top();pq.pop();
            x--;
            if(x)
                pq.push(x);
            k--;
        }
        return pq.size();
    }
};