class Solution {
public:
    string getHint(string secret, string guess) {
        int totalA[10],totalB[10];
        int correct[10];
        for(int i=0;i<10;i++)
        {
            totalA[i]=0;
            totalB[i]=0;
            correct[i]=0;
        }
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i])
                correct[secret[i]-'0']++;
            totalA[secret[i]-'0']++;
            totalB[guess[i]-'0']++;
        }
        int A=0,B=0;
        for(int i=0;i<=9;i++)
        {
            A+=correct[i];
            B=B+min(totalA[i],totalB[i])-correct[i];
        }
        string ans;
        ans=to_string(A)+'A'+to_string(B)+'B';
        return ans;
        
    }
};