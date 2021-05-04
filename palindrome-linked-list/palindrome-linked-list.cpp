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
    bool isPalindrome(ListNode* head) {
         ListNode *fast = head;
        ListNode *slow = head;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        if (fast)
            slow = slow->next;
       ListNode*tmp=slow;
        ListNode* prev=NULL;
        ListNode *nxt=nullptr;
        while(tmp)
        {
            nxt=tmp->next;
            tmp->next=prev;
            prev=tmp;
            tmp=nxt;
        }
        tmp=prev;
        // cout<<tmp->val;
        while(tmp)
        {
            if(tmp->val!=head->val)
               return false;
            tmp=tmp->next;
            head=head->next;
        }
        return true;
    }
};