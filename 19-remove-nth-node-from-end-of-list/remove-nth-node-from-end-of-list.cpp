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
        if(head->next==NULL){
            head=head->next;
            return head;
        }
        int size=1;
        ListNode* temp=head;
        ListNode* tail=head;
        while(tail->next!=NULL){
            tail=tail->next;
            size++;
        }
        if(size-n==0) head=head->next;
        for(int i=1;i<(size-n);i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;


    }
};