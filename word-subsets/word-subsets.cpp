class Solution {
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        vector<string>ans;
        int rq[26]={0}; int al[26]={0};
        for(auto u:B)
        {
            for(auto v:u)al[v-'a']++;
            for(int i=0;i<26;i++)
                {rq[i]=max(rq[i],al[i]);al[i]=0;}
        }
        for(auto u:A)
        {  int f=0;
            for(auto v:u)al[v-'a']++;
            for(int i=0;i<26;i++)
            {
                if(al[i]<rq[i])f=1;
                al[i]=0;
            }
         if(!f)ans.push_back(u);
        }
        return ans;
    }
};