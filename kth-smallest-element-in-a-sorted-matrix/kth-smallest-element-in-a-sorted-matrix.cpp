int n;
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
         n=matrix.size();int l=matrix[0][0],r=matrix[n-1][n-1];
        while(l<r)
        {
            int mid=l-(l-r)/2;
            int getIndex=solve(matrix,mid);
            if(getIndex>=k)
                r=mid;
            else
                l=mid+1;
        }
        return r;
    }
    int solve(vector<vector<int>>& matrix,int val)
    {
        int row=n-1,col=0,idx=0;
        while(row>=0&&col<n)
        {
            if(matrix[row][col]<=val)
               { col++;
                idx+=(row+1);
               }
                else
                {
                    row--;
                }
        }
        return idx;
    }
};