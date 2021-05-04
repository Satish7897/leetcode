class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
           int n=deck.size();queue<int>q;
        sort(deck.begin(),deck.end());
        for(int i=0;i<n;i++)
            q.push(i);
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
           ans[q.front()]=deck[i];
            q.pop();
           q.push(q.front());
            q.pop();
        }
         return ans;
    }
};