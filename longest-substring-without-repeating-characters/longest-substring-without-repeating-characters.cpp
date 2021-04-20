class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0;
        int currWord[400]={0};
        int l=0,ans=0,ct=0;
        for(int i=0;i<s.size();i++)
        {
            if(currWord[s[i]])
            {
                while(currWord[s[i]])
                {
                    currWord[s[l]]--;
                    l++;
                }
            }
            currWord[s[i]]++;
            ans=max(ans,i-l+1);
          //  cout<<l<<"\n";
        }
        return ans;
    }
};