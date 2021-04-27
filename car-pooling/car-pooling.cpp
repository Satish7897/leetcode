class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
     sort(trips.begin(),trips.end(),[](vector<int>&a,vector<int>&b){
         if(a[1]!=b[1])return a[1]<b[1];
         if(a[2]!=b[2])return a[2]<b[2];
         return a[0]<b[0];
         
     });
     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
     int cur=0;
     for(int i=0;i<trips.size();i++)
     {
         while(pq.size()&&pq.top().first<=trips[i][1])
         {
             cur-=pq.top().second;
             pq.pop();
         }
         cur+=trips[i][0];
         if(cur>capacity)return false;
         pq.push({trips[i][2],trips[i][0]});
     }
        return true;
        
    }
};