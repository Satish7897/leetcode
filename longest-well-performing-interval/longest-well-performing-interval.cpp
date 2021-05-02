class Solution {
public:
    int longestWPI(vector<int>& hours) {
       vector<int>hash(10001,-1);
        int ans=0,diff=0;
       for(int i=0;i<hours.size();i++)
       {
           if(hours[i]>8)diff++;
           else diff--;
           if(diff<=0)
           {
               if(hash[abs(diff-1)]!=-1)
                   ans=max(ans,i-hash[abs(diff-1)]);
               if(hash[abs(diff)]==-1)
                   hash[abs(diff)]=i;
           }
           else
           ans=i+1;
           
       }
        return ans;
        
    }
};