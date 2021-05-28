class Solution {
public:
    int calculate(string s) {
        int ans=0,n=s.size(),sum=-1;
        stack<int>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                if(sum>=0)st.push(sum);
                sum=-1;
                continue;
            }
            else if(s[i]=='+'){
                if(sum>=0)
                st.push(sum);
                sum=-1;
                st.push(-1);}
            else if(s[i]=='-'){
                if(sum>=0)
                st.push(sum);
                sum=-1;st.push(-2);}
            else if(s[i]>='0'&&s[i]<='9')
                {
                sum=max(sum,0);
                sum=sum*10+(s[i]-'0');
               }
            else 
            {
              char c=s[i];
                if(sum>=0)
                st.push(sum);sum=0;
                while(i+1<n&&s[i+1]==' ')
                    i++;
              
                while(i+1<n&&s[i+1]>='0'&&s[i+1]<='9')
                {
                    sum=sum*10+(s[i+1]-'0');
                    i++;
                }
            
                int x=st.top();st.pop();
                  
                if(c=='/')
                  st.push(x/sum);
            
                if(c=='*')
                st.push(x*sum);
                
                sum=-1;
            }
          //  cout<<sum<<" ";
         
            
        }
        if(sum>=0)st.push(sum);
        while(st.size())
        {
            int x=st.top();st.pop();
            cout<<x<<" ";
            if(st.size())
            {
                if(st.top()==-1)ans+=x;
                else ans-=x;
                st.pop();
            }
            else
                ans+=x;
                
        }
        return ans;
    }
};