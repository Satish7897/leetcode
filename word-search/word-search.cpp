int n,m;
int x1[]={-1,0,1,0};
int x2[]={0,1,0,-1};
int f=0;
bool vis[10][10];
class Solution {
public:
    void dfs(int i,int j,string word,vector<vector<char>>& board,int idx)
    {
        vis[i][j]=true;
      //  cout<<i<<" "<<j<<" "<<idx<<"\n";
        if(idx==word.size()){f=1; return;}
        for(int k=0;k<4;k++)
        {
            int x=x1[k]+i;
            int y=x2[k]+j;
            if(x>=0&&x<n&&y>=0&&y<m&&vis[x][y]==false&&word[idx]==board[x][y])
                 dfs(x,y,word,board,idx+1);
        }
        vis[i][j]=false;
        //return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
      n=board.size(),m=board[0].size();
       f=0;
      for(int i=0;i<n;i++)
         { for(int j=0;j<m;j++)
          {
              if(board[i][j]==word[0])
                 {  memset(vis,false,sizeof(vis));
                  dfs(i,j,word,board,1);
                     if(f==1)
                       return true;
                 }      
          }}
     return false;
    }
};