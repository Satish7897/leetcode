class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string ans;int c1=0,c2=0,n=a+b;
        while(ans.size()<(n))
        {  //cout<<a<<" "<<b<<"\n";
           if(c1==2||a==0){ans+='b';b--;c1=0;c2++;}
           else if(c2==2||b==0){ans+='a';a--;c2=0,c1++;}
           else if(a>=b&&c1<2){ans+='a';a--;c1++;c2=0;}
           else {ans+='b';b--;c2++;c1=0;}
        }
        return ans;
    }
};