class Solution {
public:
    int arrayNesting(vector<int>& nums) {
      int n=nums.size(),ans=0;
      bool vis[n];
      memset(vis,false,sizeof(vis));
      for(int i=0;i<n;i++)
      {
          if(!vis[i])
          {
              int ct=0;
              vis[i]=true;
              queue<int>q;
              q.push(nums[i]);
              while(!q.empty())
              {
                  ct++;
                  int x=q.front();
                  q.pop();
                  if(!vis[x])
                  {
                      q.push(nums[x]);
                      vis[x]=true;
                  }
              }
              ans=max(ans,ct);
                  
          }
      }
        return ans;
    }
};