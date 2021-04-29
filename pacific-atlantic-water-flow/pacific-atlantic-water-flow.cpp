class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& hgt) {
        int n=hgt.size(),m=hgt[0].size();
        int x[]={0,-1,1,0};
        int y[]={-1,0,0,1};
        bool v1[n][m],v2[n][m];
        memset(v1,false,sizeof(v1));
        memset(v2,false,sizeof(v2));
        for(int j=0;j<m;j++)
        {
            queue<pair<int,int>>q;
            q.push({0,j});
            v1[0][j]=true;
            while(q.size())
            {
               auto u=q.front();q.pop();
              for(int i=0;i<4;i++)
              {
                  int x1=u.first+x[i];
                  int y1=u.second+y[i];
                  if(x1>=0&&x1<n&&y1>=0&&y1<m&&v1[x1][y1]==false&&hgt[x1][y1]>=hgt[u.first][u.second])
                  {
                      v1[x1][y1]=true;
                      q.push({x1,y1});
                  }
              }
            }
        }
        for(int i=0;i<n;i++)
        {
            queue<pair<int,int>>q;
            q.push({i,0});
            v1[i][0]=true;
            while(q.size())
            {
               auto u=q.front();q.pop();
              for(int k=0;k<4;k++)
              {
                  int x1=u.first+x[k];
                  int y1=u.second+y[k];
                  if(x1>=0&&x1<n&&y1>=0&&y1<m&&v1[x1][y1]==false&&hgt[x1][y1]>=hgt[u.first][u.second])
                  {
                      v1[x1][y1]=true;
                      q.push({x1,y1});
                  }
              }
            }
        }
        for(int j=0;j<m;j++)
        {
            queue<pair<int,int>>q;
            q.push({n-1,j});
            v2[n-1][j]=true;
            while(q.size())
            {
               auto u=q.front();q.pop();
              for(int i=0;i<4;i++)
              {
                  int x1=u.first+x[i];
                  int y1=u.second+y[i];
                  if(x1>=0&&x1<n&&y1>=0&&y1<m&&v2[x1][y1]==false&&hgt[x1][y1]>=hgt[u.first][u.second])
                  {
                      v2[x1][y1]=true;
                      q.push({x1,y1});
                  }
              }
            }
        }
        for(int j=0;j<n;j++)
        {
            queue<pair<int,int>>q;
            q.push({j,m-1});
            v2[j][m-1]=true;
            while(q.size())
            {
               auto u=q.front();q.pop();
              for(int i=0;i<4;i++)
              {
                  int x1=u.first+x[i];
                  int y1=u.second+y[i];
                  if(x1>=0&&x1<n&&y1>=0&&y1<m&&v2[x1][y1]==false&&hgt[x1][y1]>=hgt[u.first][u.second])
                  {
                      v2[x1][y1]=true;
                      q.push({x1,y1});
                  }
              }
            }
        }
        vector<vector<int>>ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v1[i][j]&&v2[i][j])
                    ans.push_back({i,j});
            }
        }
        return ans;
    }
};