class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt=0,cntR=0,cntL=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')cntL++;
            else cntR++;
            if(cntL==cntR)
                cnt++;
        }
        return cnt;
    }
};