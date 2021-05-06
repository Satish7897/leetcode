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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        vector<ListNode*>ans;
        int len=0;
        ListNode *tmpRoot=root;
        while(tmpRoot)
        {
            tmpRoot=tmpRoot->next;
            len++;
        }
        ListNode *prev=NULL;
        ListNode *r=root;
        while(k)
        {
            int sz=(len+k-1)/k;
            ans.push_back(r);
            while(sz)
            {
                prev=r;
                if(r!=NULL)
                r=r->next;
                sz--;
                len--;
            }
            if(prev)
            prev->next=nullptr;
            k--;
        }
        return ans;
        
    }
};