class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(auto u:moves)
        {
            if(u=='U')y++;
            else if(u=='D')y--;
            else if(u=='L')x--;
            else x++;
        }
        if(x==0&&y==0)return true;
        return false;
    }
};