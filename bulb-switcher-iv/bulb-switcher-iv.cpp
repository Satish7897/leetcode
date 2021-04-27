class Solution {
public:
    int minFlips(string s) {
        
        int ct=0,st=0,zr=1,on=0;
        for(int i=0;i<s.size();i++)
        {
            
                if(s[i]=='1'&&on==0){ct++;on=1;zr=0;}
                if(s[i]=='0'&&on==1){ct++;zr=1;on=0;}
            
        }
        return ct;
    }
};