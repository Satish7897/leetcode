class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        string x,y,p,q;
        int f=0;
        for(int i=0;i<a.size()-1;i++)
        {  if(a[i]=='+'){f=1;continue;}
            if(f)y+=a[i];
            else x+=a[i];
        }
        f=0;
        for(int i=0;i<b.size()-1;i++)
        {
            if(b[i]=='+'){f=1;continue;}
            if(f)
                q+=b[i];
            else
                p+=b[i];
        }
        cout<<p<<" "<<x;
        int p1=stoi(p),q1=stoi(q),x1=stoi(x),y1=stoi(y);
        string ans=to_string(p1*x1-q1*y1);
        ans+='+';
        ans+= to_string(q1*x1+p1*y1)+'i';
        return ans;
    }
};