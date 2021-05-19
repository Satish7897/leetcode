/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int,ListNode*>mp;
        ListNode *dummy=new ListNode(0),*curr=dummy;
        dummy->next=head;
        int preSum=0;
        while(curr)
        {
            preSum+=curr->val;
            if(mp.find(preSum)!=mp.end())
            {
                curr=mp[preSum]->next;
                int tSum=preSum+curr->val;
                while(tSum!=preSum)
                {
                    mp.erase(tSum);
                    curr=curr->next;
                    tSum+=curr->val;
                    
                }
                mp[preSum]->next=curr->next;
            }
            else
                mp[preSum]=curr;
            curr=curr->next;
        }
        return dummy->next;
        
       
    }
};