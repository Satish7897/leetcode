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
    ListNode* oddEvenList(ListNode* head) {
       if(!head)return head;
        ListNode *evenHead=head->next,*currOdd=head,*currEven=evenHead;
        while(currEven!=NULL&&currEven->next!=NULL)
        {
             currOdd->next =currOdd->next->next;
            currEven->next=currEven->next->next;
            currEven=currEven->next;
            currOdd=currOdd->next;
            
        }
        currOdd->next=evenHead;
        return head;
    }
};