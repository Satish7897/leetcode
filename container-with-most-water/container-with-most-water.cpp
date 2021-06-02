class Solution {
public:
    int maxArea(vector<int>& hgt) {
        int l=0,n=hgt.size(),r=n-1,ans=0;
        while(l<r)
        {
            ans=max(ans,min(hgt[l],hgt[r])*(r-l));
            if(hgt[l]>hgt[r])
                r--;
            else
                l++;
        }
        return ans;
        
    }
};