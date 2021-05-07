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
    ListNode* swapPairs(ListNode* head) {
        ListNode*cur=head;
        ListNode*prev=new ListNode(0);
        prev->next=head;
        head=prev;
        while(cur)
        {
            ListNode*tmp=cur;
            if(tmp->next==NULL)break;
            prev->next=cur->next;
            if(prev->next)
            {tmp->next=prev->next->next;
            prev->next->next=tmp;}
            prev=tmp;
            cur=tmp->next;
           // return head;
        }
        head=head->next;
        return head;
    }
};