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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        ListNode* curr=head->next;
        while(curr!=NULL){
            if(curr->val==temp->val) curr=curr->next;
            else {
                temp=temp->next;
                swap(temp->val,curr->val);
                curr=curr->next;
            }
        }
        temp->next=NULL;
        temp=head;
        return temp;
    }
};