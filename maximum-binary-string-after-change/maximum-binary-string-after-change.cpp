class Solution {
public:
    string maximumBinaryString(string s) {
        int n=s.size(),o=0,z=0;
        for(int i=0;i<n;i++)
        {
          if(s[i]=='0')z++;
          if(z==0)o++;
            s[i]='1';
        }
        if(o<n)s[o+z-1]='0';
        return s;
    }
};