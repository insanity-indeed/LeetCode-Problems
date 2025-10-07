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
        if(head == NULL || head -> next == NULL)    return head ;
        ListNode* temp = head ;
        ListNode* curr = temp ;
        temp = temp -> next ;
        while(temp != NULL){
            if(temp -> val == curr -> val){
                curr -> next = temp -> next ;
                temp = temp -> next ;
                continue ;
                //delete temp;
            }
            curr = temp ;
            temp = temp -> next;
        } 
        return head ;  
    }
};