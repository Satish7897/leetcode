class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);int n=s.size();
        for(int i=0;i<n;i++)
        {
            int mx=-1,idx=-1;
            for(int j=i+1;j<n;j++)
            {
                if(s[j]>s[i]&&(s[j]-'0')>=mx)
                {
                    mx=s[j]-'0';
                    idx=j;
                }
                    
            }
            if(mx!=-1)
            {
                swap(s[i],s[idx]);
                break;
            }
        }
        num=stoi(s);
        return num;
        
    }
};