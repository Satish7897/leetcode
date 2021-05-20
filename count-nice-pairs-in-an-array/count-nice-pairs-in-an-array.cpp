#define mod 1000000007
int rev(int n)
{
    string s=to_string(n);
    reverse(s.begin(),s.end());
    return stoi(s);
}
class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum=0;
        for(auto u:nums)
        {
            int x=u-rev(u);
           // cout<<x<<"\n";
            sum+=mp[x];
            sum%=mod;
            mp[x]++;
        }
        return sum%mod;
    }
};