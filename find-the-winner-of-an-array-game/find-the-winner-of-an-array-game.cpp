class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int cur=arr[0],mx=0,n=arr.size();
        for(int i=1;i<n;i++)
        {
            if(arr[i]<cur)
            mx++;
            else
            {
                cur=arr[i];
                mx=1;
            }
            if(mx==k)return cur;
        }
        return cur;
    }
};