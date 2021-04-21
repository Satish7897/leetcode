bool isAlpha(char c)
{
    return ((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'));
}
char convert(char c)
{
    if(c>='a'&&c<='z')return c;
    return (c+32);
}
class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        int i=0,j=s.size()-1;
        while(i<j)
        {
            while(i!=s.size()&&!isAlpha(s[i]))
                i++;
            while(j>=0&&!isAlpha(s[j]))
                j--;
          //  cout<<s[i]<<" "<<s[j];
            if(i>=j)break;
            s[i]=convert(s[i]);
            s[j]=convert(s[j]);
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
};