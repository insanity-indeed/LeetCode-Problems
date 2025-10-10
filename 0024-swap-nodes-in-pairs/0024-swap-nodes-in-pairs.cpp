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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        dummy-> next = head ;
        ListNode* first = dummy -> next ;
        ListNode* prev = dummy ;
        while(prev -> next != NULL && prev -> next -> next  != NULL){
            ListNode* temp = new ListNode(first -> val);
            ListNode* second = first -> next ;
            temp -> next = second -> next ;
            second -> next = temp ;
            prev -> next = second ;
            prev = temp ;
            first = prev -> next ;
        }
        return dummy -> next ;   
    }
};