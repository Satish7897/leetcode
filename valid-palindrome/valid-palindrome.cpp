bool isAlpha(char c)
{
    return ((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'));
}
class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(isAlpha(s[i]))
            {
                if(s[i]>='A'&&s[i]<='Z')
                    ans+=(s[i]+32);
                else
                    ans+=s[i];
            }
        }
        int n=ans.size();
        for(int i=0;i<n/2;i++)
        {
            if(ans[i]!=ans[n-i-1])return false;
        }
        return true;
    }
};