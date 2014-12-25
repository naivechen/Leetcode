// 


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *ans=head;
        while(ans->next!=NULL && ans->val==ans->next->val)
            ans=ans->next;
        if(ans!=head)
        {
            while(head!=ans->next)
            {
                ListNode *tmp=head;
                head=head->next;
                free(tmp);
            }
            return deleteDuplicates(ans->next);
        }
        head->next=deleteDuplicates(head->next);
        return head;
    }
};

