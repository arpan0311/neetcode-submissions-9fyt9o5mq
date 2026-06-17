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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int total=0;
        ListNode* temp=head;

        while(temp!=nullptr){
            total++;
            temp=temp->next;
        }

        int dest=total-n;
        cout<<dest<<endl;
        if(dest==0){
            return head->next;
        }

        temp=head;
        ListNode* answer=temp;
        while(dest>1){
            temp=temp->next;
            dest--;
        }
        temp->next=temp->next->next;
        return answer;
    }
};