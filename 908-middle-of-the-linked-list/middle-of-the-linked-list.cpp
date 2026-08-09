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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int size=1;
        while(temp->next!=NULL){
            temp=temp->next;
            size++;
        }
        int idx=(size/2)+1;
        for(int i=1;i<idx;i++){
            head=head->next;
        }
        return head;

    }
};