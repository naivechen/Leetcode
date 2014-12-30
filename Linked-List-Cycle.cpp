// https://oj.leetcode.com/problems/linked-list-cycle/


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
    bool hasCycle(ListNode *head) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        ListNode *slow, *fast;//1 node per step and 2 nodes per step
        
        if(head == NULL)
            return false;
        
        slow = head;
        fast = head -> next;
        
        while(true)
        {
            if(fast == NULL)
                return false;
            
            fast = fast -> next;
            if(fast == NULL)
                return false;
            if(fast == slow)
                return true;
                
            fast = fast -> next;
            if(fast == NULL)
                return false;
            if(fast == slow)
                return true;
            
            slow = slow -> next;
            if(fast == slow)
                return true;
        }
        
    }
};
