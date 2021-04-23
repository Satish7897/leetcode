class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutes;
        for(auto u:timePoints)
        {
            int p1=stoi(u.substr(0,2));
            int q1=stoi(u.substr(3,2));
            minutes.push_back(p1*60+q1);
        }
        sort(minutes.begin(),minutes.end());
        int ans=INT_MAX;int n=minutes.size();
        int mindiff = INT_MAX;
        for (int i = 0; i < minutes.size(); i++) {
            int diff = abs(minutes[(i - 1 + n) % n]-minutes[i]);
            diff = min(diff, 1440 - diff);
            ans = min(ans, diff);
        }
        return ans;
        return ans;
    }
    
};