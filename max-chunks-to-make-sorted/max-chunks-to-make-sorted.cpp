class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int ct=0,mi=0,len=0,mx=0;
        for(auto u:arr)
        {
            mx=max(mx,u);
            len++;
            if(mx-len+1==mi)
            {
                mi=mx+1;
                len=0;
                ct++;
            }
            cout<<mi<<" "<<mx<<" "<<len<<"\n";
        }
        return ct;
    }
};