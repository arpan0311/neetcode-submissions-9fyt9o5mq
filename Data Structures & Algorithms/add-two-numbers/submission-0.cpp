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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        while (l1 != nullptr && l2 != nullptr) {
           int val=l1->val+l2->val+carry;
            carry=val/10;
            int digit=val%10;
            ListNode* newnode = new ListNode(digit);
            curr->next = newnode;
            curr = curr->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != nullptr) {
             int val=l1->val+carry;
            carry=val/10;
            int digit=val%10;
            ListNode* newnode = new ListNode(digit);
            curr->next = newnode;
            curr = curr->next;
            l1 = l1->next;
        }

        while (l2 != nullptr) {
            int val=l2->val+carry;
            carry=val/10;
            int digit=val%10;
            ListNode* newnode = new ListNode(digit);
            curr->next = newnode;
            curr = curr->next;
            l2 = l2->next;
        }
        if(carry!=0){
            ListNode* newnode = new ListNode(carry);
            curr->next = newnode;
            curr = curr->next;
        }
        return dummy->next;
    }
};