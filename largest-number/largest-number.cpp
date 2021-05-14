class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>v;
        for(auto u:nums)
            v.push_back(to_string(u));
        sort(v.begin(),v.end(),[](string s1,string s2){
            return s1+s2>s2+s1;
        });
        string ans;
        for(auto u:v)
        {
            if(ans.size()==0&&u[0]=='0')continue;
                ans+=u;
        }
        if(ans.size()==0)
            ans+='0';
        return ans;
    }
};