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
ListNode* reverseList(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* next1=head->next;
        while(next1!=nullptr){
            curr->next=prev;
            prev=curr;
            curr=next1;
            next1=next1->next;
        }
        curr->next=prev;
        return curr;
    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr&&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* rev=reverseList(slow);

        ListNode* curr=head;
        while(rev->next!=nullptr){
            ListNode* currNext=curr->next;
            curr->next=rev;

            ListNode* revNext=rev->next;
            rev->next=currNext;

            curr=currNext;
            rev=revNext;

        }


    }
};