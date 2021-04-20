class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>st;
        for(int i=0;i<words.size();i++)
        {  string tmp;
            for(int j=0;j<words[i].size();j++)
                tmp+=arr[words[i][j]-'a'];
           st.insert(tmp);
        }
        return st.size();
    }
};