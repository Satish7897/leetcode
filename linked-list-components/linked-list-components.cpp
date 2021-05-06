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
    int numComponents(ListNode* head, vector<int>& G) {
        unordered_set<int> mp (G.begin(), G.end());
        int ct=0,f=0;
        while(head)
        {
            if(mp.find(head->val)==mp.end())f=0;
            else
                if(f==0){f=1;ct++;}
            head=head->next;
        }
        return ct;
    }
};