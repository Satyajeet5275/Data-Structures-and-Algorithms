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
        if(!head || !head->next || !head->next->next) return head;
        ListNode *odd=head;
        ListNode *even=head->next;
        ListNode *temp;
        while(even!=NULL && even->next!=NULL){
            temp=even->next->next;
            even->next->next=odd->next;
            odd->next=even->next;
            even->next=temp;
            odd=odd->next;
            even=temp;
        }
        return head;
    }
};