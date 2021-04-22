class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=1,r=arr.size()-2;
        int ans;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
            {
                ans=mid;break;
            }
            else if(arr[mid]>arr[mid-1])
                l=mid+1;
            else
                r=mid-1;
        }
        return ans;
    }
};