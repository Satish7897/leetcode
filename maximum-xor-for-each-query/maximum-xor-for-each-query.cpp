class Solution {
public:
    vector<int> getMaximumXor(vector<int>& a, int mx) {
        int bit[mx];memset(bit,0,sizeof(bit));
        for(auto u:a)
        {
            for(int i=0;i<mx;i++)
                bit[i]+=((u&(1<<i))?1:0);
        }
        vector<int>ans;
        for(int i=a.size()-1;i>=0;i--)
        { int pw=1,sum=0;
            for(int j=0;j<mx;j++)
            {
                if(bit[j]%2==0)sum+=pw;
                pw*=2;
                if(a[i]&(1<<j))bit[j]--;
            }
         ans.push_back(sum);
        }
        return ans;
    }
};