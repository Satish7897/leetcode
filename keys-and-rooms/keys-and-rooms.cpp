class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>vis(n,false);
        queue<int>q;
        q.push(0);vis[0]=true;int ct=1;
        while(q.size())
        {
            int src=q.front();q.pop();
            for(auto u:rooms[src])
            {
                if(!vis[u])
                {
                    ct++;
                    vis[u]=true;
                    q.push(u);
                }
            }
        }
        return ct==n;
        
    }
};