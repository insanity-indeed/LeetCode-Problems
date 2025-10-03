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
    void deleteNode(ListNode* node) {
        ListNode* temp = node ;
        while(temp){
            node = node-> next;
            temp -> val = node -> val ;
            temp -> next = node -> next ;
            temp = temp -> next ;
        }

    }
};