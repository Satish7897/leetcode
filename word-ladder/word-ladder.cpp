class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>mp(wordList.begin(),wordList.end());
        queue<string>q;
        q.push(beginWord);
        int level=1;
        while(q.size())
        {    int sz=q.size();
            for(int k=0;k<sz;k++)
             { string s=q.front();q.pop();
               //cout<<s<<" ";
            if(s==endWord)
                return level;
            mp.erase(s);
            for(int i=0;i<s.size();i++)
            {
                for(char c='a';c<='z';c++)
                {  if(s[i]==c)continue;
                    string tmp=s;
                    tmp[i]=c;
                 if(mp.find(tmp)!=mp.end())
                     q.push(tmp);
                // mp.erase(tmp);
                }
            }
             }
            cout<<"\n";
            level++;
        }
        return 0;
        
    }
};