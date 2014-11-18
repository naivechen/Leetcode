//  https://oj.leetcode.com/problems/add-two-numbers/


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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *ans=new ListNode(0);
        ListNode *pre=ans;
        int flag=0;
        while(l1!=NULL || l2!=NULL)
        {
            if(l1!=NULL)
            {
                flag+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                flag+=l2->val;
                l2=l2->next;
            }
            pre->next=new ListNode(flag%10);
            flag/=10;
            pre=pre->next;
        }
        if(flag) pre->next=new ListNode(1);
        return ans->next;
    }
};

