class Solution {
long range=pow(2,32);
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        int p=s.size();
        for(int i=p-2;i>=0;i--)
        {   int idx=-1,mx=INT_MAX;
            for(int j=i+1;j<p;j++)
            {
                if(s[j]>s[i]&&(s[j]-'0')<mx)
                {
                    mx=s[j]-'0';
                    idx=j;
                }
            }
         if(idx!=-1)
         {
             swap(s[i],s[idx]);
             sort(s.begin()+i+1,s.end());
             break;
         }
        }
        
        
        long long k=0;
        for(int i=0;i<s.size();i++)
        {
            k=k*10+(s[i]-'0');
        }
        cout<<k<<" "<<INT_MAX;
        return n==k||k>INT_MAX?-1:k;
    }
};