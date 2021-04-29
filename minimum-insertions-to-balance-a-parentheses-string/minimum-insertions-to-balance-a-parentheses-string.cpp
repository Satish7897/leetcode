class Solution {
public:
    int minInsertions(string s) {
     string ans;int n=s.size();
     for(int i=0;i<n;i++)
     {
         if(i+1<n&&s[i]==')'&&s[i+1]==')')
           {  ans+=']';i++;}
         else
             ans+=s[i];
     }
    int a=0,b=0;
        cout<<ans;
    for(int i=0;i<ans.size();i++)
    {
      if(ans[i]=='(')a++;
      else if(ans[i]==']'&&a>0)
          a--;
      else if(ans[i]==')'&&a>0)
      {a--;b++;}
      else
      {
          b+=(ans[i]==')'?2:1);
      }
    }
        cout<<a<<" "<<b;
   return b+2*a;
    }
};