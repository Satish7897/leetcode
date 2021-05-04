class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int mx=arr.size(),n=mx;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {  int idx=-1;
            for(int j=0;j<n;j++)
                if(arr[j]==mx&&arr[j]!=j+1)
                    {idx=j;break;}
           //cout<<idx;
           // for(auto u:arr)
           //     cout<<u<<" ";
         // cout<<idx;
        // cout<<"\n";
           if(idx!=-1)
           {
               ans.push_back(idx+1);
               for(int j=0;j<=idx/2;j++)
                   swap(arr[j],arr[idx-j]);
               ans.push_back(mx);
               for(int j=0;j<mx/2;j++)
                   swap(arr[j],arr[mx-1-j]);
           }
          mx--;
        }
        return ans;
        
    }
};