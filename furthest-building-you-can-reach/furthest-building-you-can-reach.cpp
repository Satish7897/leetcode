class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int,vector<int>,greater<int>>pq;
        int n=heights.size(),x;
        for(int i=1;i<n;i++)
        {
            if(heights[i]>heights[i-1])
            {
                x=heights[i]-heights[i-1];
                pq.push(x);
            }
            if(pq.size()>ladders)
            {
                if(bricks>=pq.top())
                {bricks-=pq.top();pq.pop();}
                else
                    return i-1;
            }
        }
        return n-1;
    }
};