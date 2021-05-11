class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        int level=log2(label);
        vector<int>ans;
        for(int i=level;i>=0;i--)
        {
            ans.push_back(label);
            int en=pow(2,i)-1;
            int st=pow(2,i-1);
            int mid=(st+en)/2;
           // cout<<st<<" "<<en<<"\n";
            int pr=label/2;
            if(pr>mid)
            {
                int x=en-pr;
                label=st+x;
            }
            else
            {
                int x=pr-st;
                label=en-x;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};