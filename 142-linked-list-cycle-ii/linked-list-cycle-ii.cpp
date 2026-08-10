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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head; 
        ListNode* fast=head; // fast can be 2x, 3x, 4x, 5x and it will be catch slow before slow reaches end
        bool flag=false;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow) {
                flag=true;
                break;
            }
        }
        if(flag==false) return NULL;
        ListNode* temp=head;
        while(temp!=slow){
            temp=temp->next;
            slow=slow->next;
        }
        return slow;
    }
};
