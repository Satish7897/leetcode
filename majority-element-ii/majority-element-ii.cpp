class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1=-1,el2=-1,c1=0,c2=0;
        for(auto u:nums)
        {
            if(el1==u)c1++;
            else if(el2==u)c2++;
            else if(c1==0)
                el1=u,c1=1;
            else if(c2==0)
                el2=u,c2=1;
            else
                c1--,c2--;
        }
        vector<int>ans;
        int sz=nums.size()/3,x=0,y=0;
        cout<<sz;
        for(auto u:nums)
        {
           if(c1>0&&el1==u)
               x++;
            if(x>sz)
            {ans.push_back(el1);x=0,c1=-1;}
            if(c2>0&&el2==u)
                y++;
            if(y>sz)
            {ans.push_back(el2);y=0,c2=-1;}
            
                
        }
        return ans;
        
    }
};