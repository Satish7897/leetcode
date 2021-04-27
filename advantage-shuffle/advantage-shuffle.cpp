class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>ans(n,-1);
        sort(A.begin(),A.end());
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++)
            vp.push_back({B[i],i});
        sort(vp.begin(),vp.end());
        int st=0,en=n-1;
        for(int i=0;i<n;i++)
        { // cout<<vp[i].first<<" "<<A[i]<<"\n";
            if(A[i]>vp[st].first)
            {
                ans[vp[st].second]=A[i];
                st++;
            }
            else
            {
                ans[vp[en].second]=A[i];
                en--;
            }
        }
        return ans;
    }
};