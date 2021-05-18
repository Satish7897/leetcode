int parent[10001],sz[10001];

class Solution {
public:
    void make(int n)
    {
        for(int i=1;i<=n;i++)
        {
            parent[i]=i;
            sz[i]=1;
        }
    }
    int find_set(int a)
    {   if(a==parent[a])
        return a;
        return parent[a]=find_set(parent[a]);
       
    }
    void union_set(int a,int b)
    {
        a=find_set(a);
        b=find_set(b);
        if(a!=b)
        {
            if(sz[b]>sz[a])
                swap(a,b);
            sz[a]+=sz[b];
            parent[b]=a;
        }
    }
    vector<bool> areConnected(int n, int threshold, vector<vector<int>>& queries) {
        make(n);
        for(int i=threshold+1;i<=n;i++)
        {  
            for(int j=i;j<=n;j+=i)
               union_set(i,j);
        }
        vector<bool>ans;
     
        for(auto u:queries)
          ans.push_back(parent[u[0]]==parent[u[1]]);
          
        return ans;
       
    }
};