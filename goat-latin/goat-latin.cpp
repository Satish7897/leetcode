class Solution {
bool isVowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
       c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        return true;
    return false;
}
public:
    string toGoatLatin(string S) {
        string ans;
        int f=0;
        if(isVowel(S[0]))f=1;string x,tmp;
        for(int i=0;i<=S.size();i++)
        {  
            if(i==S.size()||S[i]==' ')
            {   x+='a';
                if(isVowel(tmp[0]))
                {
                    ans+=tmp;
                    ans+="ma";
                    ans+=x;
                }
                else
                {
                    char c=tmp[0];
                    tmp=tmp.substr(1,tmp.size()-1);
                    ans+=tmp;
                    ans+=c;
                    ans+="ma";
                    ans+=x;
                    
                }
             tmp="";
             if(i!=S.size())
                 ans+=' ';
            }
            else
                tmp+=S[i];
                
        }
        return ans;
        
    }
};