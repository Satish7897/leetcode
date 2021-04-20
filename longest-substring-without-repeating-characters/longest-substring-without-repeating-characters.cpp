class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int ans=0,start=-1;
        vector<int>sId(400,-1);
        for(int i=0;i<s.size();i++)
        {
            if(sId[s[i]]>start)
                start=sId[s[i]];
            sId[s[i]]=i;
            ans=max(ans,i-start);
        }
        return ans;
    }
};