int d[]={0,1,0,-1,0},n,m;
class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>&A)
    {
        A[i][j]=2;
        for(int k=0;k<4;k++)
        {
           int x=i+d[k];
           int y=j+d[k+1];
           if(x>=0&&x<n&&y>=0&&y<m&&A[x][y]==1)
               dfs(x,y,A);
        }
    }
    int shortestBridge(vector<vector<int>>& A) {
        n=A.size(),m=A[0].size();int f=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(f==0&&A[i][j]==1)
                {dfs(i,j,A);f=1;}
                else if(f==1&&A[i][j]==1)
                    q.push({i,j});
            }
        int level=0;
        while(q.size())
        {
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                pair<int,int> fr=q.front();q.pop();
                for(int k=0;k<4;k++)
                {
                    int x=fr.first+d[k];
                    int y=fr.second+d[k+1];
                    if(x>=0&&x<n&&y>=0&&y<m&&A[x][y]!=1)
                    {
                        if(A[x][y]==2)return level;
                        A[x][y]=1;
                        q.push({x,y});
                    }
                }
            }
            level++;
        }
        return level;
        
    }
};