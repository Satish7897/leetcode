bool used[16];int ans;
class Solution {
public:
    int countArrangement(int n) {
        memset(used,false,sizeof(used));
        ans=0;solve(1,n);
        return ans;
    }
    void solve(int ct,int n)
    {
        if(ct>n)
             {ans++;return;}
        for(int i=1;i<=n;i++)
        {
            if(!used[i]&&(i%ct==0||ct%i==0))
            {
                used[i]=true;
                solve(ct+1,n);
                used[i]=false;
            }
        }
      
    }
};