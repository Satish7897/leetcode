class Solution {
public:
    string arrangeWords(string txt) {
     vector<pair<string,int>>vp;;
        int idx=0,n=txt.size();string tmp;
    for(int i=0;i<n;i++)
    {
        if((txt[i]>='A'&&txt[i]<='Z')||(txt[i]>='a'&&txt[i]<='z'))
            tmp+=tolower(txt[i]);
        else
        {  vp.push_back({tmp,idx});
         idx++;
            tmp="";
        }
    }
    vp.push_back({tmp,idx});
    sort(vp.begin(),vp.end(),[](const pair<string,int>&a,const pair<string,int>&b){
        int x=a.first.size();
        int y=b.first.size();
        if(x==y)return a.second<b.second;
        return x<y;
    });
    string ans;
    for(int i=0;i<vp.size()-1;i++)
    {ans+=vp[i].first+" ";}
    ans+=vp[vp.size()-1].first;
    ans[0]=toupper(ans[0]);
    return ans;
    }
        
};