class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long len=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0'&&s[i]<='9')len*=(s[i]-'0');
            else len++;
        }
        for(int i=s.size()-1;i>=0;i--)
        {
            k%=len;
            if(k==0&&!(s[i]<='9'&&s[i]>='0'))
                return (string)""+s[i];
            else if(s[i]<='9'&&s[i]>='0')
                len/=(s[i]-'0');
            else
                len--;
                 
        }
        return "";
        
    }
};