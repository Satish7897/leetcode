class Solution {
public:
    int rangeBitwiseAnd(int lf, int rt) {
        int a[32],b[32];
        for(int i=0;i<32;i++)
        {
            if(lf&(1<<i)) a[i]=1;
            else a[i]=0;
               
            if(rt&(1<<i))b[i]=1;
            else b[i]=0;
        }
               int idx=-1;
              for(int i=0;i<32;i++)
               {
                   if(b[i]==1&&a[i]==0)
                       idx=i;
               }
               if(idx!=-1)
               {
                   for(int i=idx;i>=0;i--)
                       a[i]=0;
               }
               int ans=0;
               for(int i=0;i<32;i++)
               {
                   a[i]=a[i]&b[i];
                   ans=ans+a[i]*pow(2,i);
                   
               }
               return ans;
    }
   
};