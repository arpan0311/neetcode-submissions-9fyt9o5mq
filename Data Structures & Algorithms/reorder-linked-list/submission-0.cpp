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
    void reorderList(ListNode* head) {
        ListNode* temp=head;
        vector<int>answer;
        while(temp!=NULL){
            answer.push_back(temp->val);
            temp=temp->next;
        }
        int i=1,j=answer.size()-1;
        bool left=true;
        ListNode* temp1=head;
        temp1->next=NULL;
        ListNode* dummy=temp1;
        while(i<=j){
            if(left){
                temp1->next= new ListNode(answer[j]);
                j--;
                left=false;
                temp1=temp1->next;
            }
            else{
                temp1->next=new ListNode(answer[i]);
                i++;
                left=true;
                temp1=temp1->next;
            }
        }
        head=dummy;
    }
};