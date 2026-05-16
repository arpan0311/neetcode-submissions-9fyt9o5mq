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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>answer;
        while(list1!=NULL){
            answer.push_back(list1->val);
            list1=list1->next;
        }

          while(list2!=NULL){
            answer.push_back(list2->val);
            list2=list2->next;
        }
        sort(answer.begin(),answer.end());
        ListNode* dummy =new ListNode();
        ListNode* current=dummy;

        for(int value:answer){
            current->next=new ListNode(value);
            current=current->next;
        }
        ListNode* meardedHead=dummy->next;
        delete dummy;
        return meardedHead;
    }
};