class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
      priority_queue<pair<int,int>>pq;
      for(auto u:arr)
      {
          int p=abs(x-u);pq.push({p,u});
          if(pq.size()>k)
              pq.pop();
      }
      vector<int>ans;
      while(pq.size())
      {
          ans.push_back(pq.top().second);
          pq.pop();
      }
      sort(ans.begin(),ans.end());
        return ans;
    }
};