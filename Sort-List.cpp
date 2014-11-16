// https://oj.leetcode.com/problems/sort-list/


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
    ListNode *merge_sort(ListNode *head)
    {
        if(head==NULL || head->next==NULL) return head;
        ListNode *fast=head,*slow=head,*pre=NULL;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            pre=slow;
            slow=slow->next;
        }
        pre->next=NULL;
        ListNode *left=merge_sort(head);
        ListNode *right=merge_sort(slow);
        return merge(left,right);
    }
    ListNode *merge(ListNode *left,ListNode *right)
    {
        ListNode *tmp=new ListNode(0);
        ListNode *p=tmp;
        while(left && right)
        {
            if(left->val <=right->val)
            {
                p->next=left;
                left=left->next;
            }
            else 
            {
                p->next=right;
                right=right->next;
            }
            p=p->next;
        }
        if(left!=NULL)
            p->next=left;
        else p->next=right;
        p=tmp->next;
        tmp->next=NULL;
        delete tmp;
        return p;
    }
public:
    ListNode *sortList(ListNode *head) {
        if(head==NULL || head->next==NULL) return head;
        return merge_sort(head);
    }
};

