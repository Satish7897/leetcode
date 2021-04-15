class Solution {
public:
    int minSwap(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>swp(n,n);
        vector<int>nswp(n,n);
        swp[0]=1,nswp[0]=0;
        for(int i=1;i<n;i++)
        {
            if(A[i]>A[i-1]&&B[i]>B[i-1])
            {
                swp[i]=swp[i-1]+1;
                nswp[i]=nswp[i-1];
            }
            if(A[i]>B[i-1]&&B[i]>A[i-1])
            {
                swp[i]=min(swp[i],nswp[i-1]+1);
                nswp[i]=min(nswp[i],swp[i-1]);
            }
        }
        return min(swp[n-1],nswp[n-1]);
    }
};