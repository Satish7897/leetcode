class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int n=word.size(),ans=0,st=0,a[5]={0};
        int id[26];id[0]=0,id['e'-'a']=1,id['i'-'a']=2,id['o'-'a']=3,id['u'-'a']=4;
        for(int i=0;i<n;i++)
        {  int idx=id[word[i]-'a'];
            while(1)
            { int f=0;
               for(int i=idx+1;i<5;i++)
               {if(a[i])f=1;}
                if(f)
                {
                    a[id[word[st]-'a']]--;
                    st++;
                }
                else
                    break;
            }
          //  cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<"\n";
            a[id[word[i]-'a']]++;
            if(a[0]&&a[1]&&a[2]&&a[3]&&a[4])
             ans=max(ans,i-st+1);
           
        }
      
        return ans;
    }
};