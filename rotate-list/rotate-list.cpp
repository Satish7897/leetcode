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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* curr=head;
        ListNode *t=head;int sz=0;
        while(t)
        {
            t=t->next;
            sz++;
        }
        if(k==0||sz==0)return head;
        k%=sz;
           if(k==0||sz==0)return head;
        k=sz-k;
        
        k--;
        
        while(k)
          {  curr=curr->next;
          k--;}
        ListNode* newHead=curr->next;
        curr->next=NULL;
        ListNode*tmp=newHead;
        while(tmp!=NULL&&tmp->next!=NULL)
            tmp=tmp->next;
       // cout<<tmp->val;
        tmp->next=head;
        return newHead;
    }
};