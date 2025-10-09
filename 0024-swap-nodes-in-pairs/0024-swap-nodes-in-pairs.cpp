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
        if(head == NULL || head -> next == NULL)
            return head ;
        ListNode* Odd = head ;
        ListNode* Even = head -> next ;
        while(Even != NULL && Odd != NULL ){
            int temp = Odd -> val ;
            Odd -> val = Even -> val ;
            Even -> val = temp ;
            
            Odd = Even -> next ;
            if(Odd != NULL )
                Even = Odd -> next  ;
        }
        return head ;
    }
};