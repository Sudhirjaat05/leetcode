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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* prev=head;
        ListNode* nxt=head->next;
        ListNode* head2=nxt;
        while(nxt!=NULL &&  nxt->next!=NULL){
            prev->next=nxt->next;
            prev=prev->next;
            nxt->next=prev->next;
            nxt=nxt->next;
        }
        prev->next=head2;
        return head;
    }
};