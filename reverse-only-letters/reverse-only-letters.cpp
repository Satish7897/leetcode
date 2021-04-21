bool check(char c)
{
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        return false;
    return true;
}
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            while(i<s.size()&&check(s[i]))
                i++;
            if(i>=j)break;
            while(j>=0&&check(s[j]))
                j--;
             if(i>=j)break;
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
        
    }
};