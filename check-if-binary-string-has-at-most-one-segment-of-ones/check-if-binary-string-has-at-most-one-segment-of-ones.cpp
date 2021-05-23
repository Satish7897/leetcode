class Solution {
public:
    bool checkOnesSegment(string s) {
        int ct=0,f=0;
        for(int i=0;i<s.size();i++)
        {
            if(i==0)
             {   if(s[i]=='1')f=1,ct=1;}
            else if(s[i]!=s[i-1]&&s[i]=='1')
            {  //cout<<f;
                if(f)return false;
                else f=0,ct=1;
            }
        }
        return true;
    }
};