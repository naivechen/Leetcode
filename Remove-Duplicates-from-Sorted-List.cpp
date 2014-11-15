// https://oj.leetcode.com/problems/remove-duplicates-from-sorted-list/

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
        int val=head->val;
        ListNode *ans=head;
        ListNode *cur=head->next;
        while(cur!=NULL)
        {
            
            if(cur->val==ans->val)
                ans->next=cur->next;
            else 
                ans=ans->next;
            cur=cur->next;
        }
        return head;
    }
};
