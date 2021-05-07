class Solution {
    void solve(string s,int open,int close,int n,vector<string>&ans)
    {
        if(s.size()==2*n)
        {ans.push_back(s);return;}
        if(open>close)
        solve(s+')',open,close+1, n,ans);
        
        if(open<n)
            solve(s+'(',open+1,close,n,ans);
        
    }
     
    
public:
    vector<string> generateParenthesis(int n) {
      vector<string>ans;
        string s;
        solve(s,0,0,n,ans);
        return ans;
        
    }
};