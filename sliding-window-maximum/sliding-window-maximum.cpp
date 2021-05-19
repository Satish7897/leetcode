class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        priority_queue<int>pq;
        int st=0;
        for(int i=0;i<k-1;i++)
        {
            mp[nums[i]]++;
            pq.push(nums[i]);
        }
        for(int i=k-1;i<nums.size();i++)
        {
            mp[nums[i]]++;
            pq.push(nums[i]);

            while(mp[pq.top()]==0)
              pq.pop();
            ans.push_back(pq.top());
            mp[nums[st++]]--;
        }
        return ans;

    }
};