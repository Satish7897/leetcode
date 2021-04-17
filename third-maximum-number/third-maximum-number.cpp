#define ll long long int 
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        ll mx1=-2147483649,mx2=-2147483649,mx3=-2147483649,n=nums.size();
       for(auto u:nums)
       {
           if(u>mx1)
           {
               mx3=mx2;
               mx2=mx1;
               mx1=u;
           }
           else if(u!=mx1&&u>mx2)
           {
               mx3=mx2;
               mx2=u;
           }
           else if(u!=mx2&&u!=mx1&&u>mx3)
           {mx3=u;}
          //  cout<<mx1<<" "<<mx2<<" "<<mx3<<"\n";
       }
      
       if(mx3==-2147483649||mx2==-2147483649)
           return (int)mx1;
        return (int)mx3;
    }
};