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
    ListNode* partition(ListNode* head, int x) {
        ListNode *bhead=new ListNode(0);
        ListNode *ahead=new ListNode(0);
        ListNode *bh=bhead;
        ListNode *ah=ahead;
        while(head!=NULL)
        {
            if(head->val<x)
                bh=(bh->next=head);
            else
                ah=(ah->next=head);
            head=head->next;
        }
        ah->next=NULL;
        bh->next=ahead->next;
        return bhead->next;
        
    }
};