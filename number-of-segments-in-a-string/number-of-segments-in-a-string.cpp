class Solution {
public:
    int countSegments(string s) {
      
        int ct=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                if(i==0)ct++;
                else if(s[i-1]==' ')ct++;
            }
            
        }
        return ct;
    }
};