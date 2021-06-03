#define ll long long int
class Solution {
   
public:
  
    vector<int> assignTasks(vector<int>& serv, vector<int>& tsk) {
        vector<int>ans;
       priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>a,na;
       ll ct=0;
        for(int i=0;i<serv.size();i++)
            a.push({serv[i],i});
        for(ll i=0;i<tsk.size();i++)
        {  if(!a.size())
            ct=na.top().first;
            while(na.size()&&na.top().first<=ct)
            {   int idx=na.top().second;
                a.push({serv[idx],idx});
                na.pop();
            }
           
           // cout<<a.size()<<"\n";
            int idx=a.top().second;
            a.pop();
            ans.push_back(idx);
            na.push({tsk[i]+ct,idx});
                ct=max(ct,i+1);
            
            
        }
        return ans;
    }
};