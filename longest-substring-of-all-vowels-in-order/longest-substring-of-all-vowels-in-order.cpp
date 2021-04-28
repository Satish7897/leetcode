class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int n=word.size(),ans=0,st=0,a[5]={0};
        int id[26];id[0]=0,id['e'-'a']=1,id['i'-'a']=2,id['o'-'a']=3,id['u'-'a']=4;
        int len=0;
        for(int i=0;i<n;i++)
        { 
            int iw=id[word[i]-'a'],f=0;
            for(int j=iw+1;j<5;j++)
            {if(a[j])f=1;}
            if(f==1)
            {
                if(iw==0)
                {
                    len=1;
                    for(int j=iw;j<5;j++)
                        a[j]=0;
                }
                else
                {
                    len=0;
                    for(int j=0;j<5;j++)a[j]=0;
                }
            }
            else
                len++;
            a[iw]++;
            
          //  cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<"\n";
            if(a[1]&&a[2]&&a[3]&&a[4]&&a[0])
                ans=max(ans,len);
           
        }
      
        return ans;
    }
};