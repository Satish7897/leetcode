class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        vector<int>ans;int p=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                ans.push_back(p%2);
                p++;
            }
            else
            {   p--;
                ans.push_back(p%2);
            }
        }
        return ans;
    }
};