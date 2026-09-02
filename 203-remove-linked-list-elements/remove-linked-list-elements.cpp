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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        if(head->val==val){
            while(head->val==val && head->next!=NULL) head=head->next;
        }
        if(head==NULL) return head;
        if(head->val==val) return NULL;
        ListNode* prev=head;
        ListNode* temp=head->next;
        while(temp!=NULL){
            if(temp->val==val){
                prev->next=temp->next;
                temp=prev->next;
            }
            else{
                temp=temp->next;
                prev=prev->next;
            }
        }
        return head;
    }
};