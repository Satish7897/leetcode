class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<int>r(n,0);
        vector<int>c(m,0);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                r[i]=max(r[i],grid[i][j]);
        for(int j=0;j<m;j++)
            for(int i=0;i<n;i++)
                c[j]=max(c[j],grid[i][j]);
        int sum=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                sum+=min(c[j],r[i])-grid[i][j];
        return sum;
    }
};