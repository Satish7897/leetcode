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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         if (!head)
        return nullptr;

    ListNode nHead(-1);
    nHead.next = head;
        ListNode *slow=&nHead;
        ListNode *fast=&nHead;
        for(int i=0;i<n;i++)
            fast=fast->next;
        while(fast&&fast->next)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return nHead.next;
    }
};