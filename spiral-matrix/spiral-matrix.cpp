class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        int stRow=0,enRow=n-1,stCol=0,enCol=m-1;
        vector<int>ans;
        while(ans.size()<n*m)
        {
            cout<<stCol<<" "<<enCol<<"\n";
            for(int j=stCol;j<=enCol;j++)
                ans.push_back(mat[stRow][j]);
            stRow++;
            if(ans.size()<n*m)
            {for(int i=stRow;i<=enRow;i++)
                ans.push_back(mat[i][enCol]);}
            enCol--;
            if(ans.size()<n*m)
           { for(int j=enCol;j>=stCol;j--)
                ans.push_back(mat[enRow][j]);}
            enRow--;
            if(ans.size()<n*m)
           { for(int i=enRow;i>=stRow;i--)
                ans.push_back(mat[i][stCol]);}
            stCol++;
        }
        return ans;
    }
};