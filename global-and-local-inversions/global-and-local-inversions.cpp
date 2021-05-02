static int gas = [](){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();

class Solution {
public:
    bool isIdealPermutation(vector<int>& a) {
        bool ret = true;
        for(int i = a.size(); (--i>=0) & ret;)
            ret = abs(a[i] - i) < 2;
        return ret;
    }
};