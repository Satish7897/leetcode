class Solution {
public:
    int longestDecomposition(string s) {
         int n=s.size();
    int l=0,r=n-1,ct=0,lidx=n;
    while(l<=r)
    {  
    	while(s[r]!=s[l])
    	{
    		r--;
    	}
    	int sz=lidx-r;
       // cout<<sz;
    	if(l+sz-1>=r)
    		{ct++;break;}
    	if(s.substr(l,sz)==s.substr(r,sz))
    	{  //cout<<s.substr(l,sz)<<"\n";
    		ct+=2;
    		l+=sz;
    		lidx=r;
    		
    	}
    	r--;
    }
    return ct;
    }
};