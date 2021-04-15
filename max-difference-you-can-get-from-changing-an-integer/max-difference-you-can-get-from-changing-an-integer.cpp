class Solution {
public:
    int maxDiff(int num) {
        string s=to_string(num);
        string p=s;int n=s.size();
        char c;int f=0;
        for(int i=0;i<n;i++)
        {
            if(f==0&&s[i]!='9')
            {f=1;c=s[i];}
            if(f&&s[i]==c)
                s[i]='9';
        }
       
        f=0;
        string q=p;
        sort(q.begin(),q.end());
        if(p[0]=='1'&&q[0]!=q[n-1])
        {
            for(int i=1;i<n;i++)
            {
                if(f==0&&p[i]!='0'&&p[i]!='1')
                {f=1;c=p[i];}
                if(f&&p[i]==c)
                    p[i]='0';
            }
        }
        else 
        {
            char c=p[0];
            for(int i=0;i<n;i++)
            {if(p[i]==c)p[i]='1';}
        }
       cout<<s<<" "<<p<<"\n";
        int x=stoi(s)-stoi(p);
        return x;
    }
};