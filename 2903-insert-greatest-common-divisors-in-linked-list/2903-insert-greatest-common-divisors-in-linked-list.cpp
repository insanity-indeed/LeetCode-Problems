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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head ;
        while(temp != NULL && temp -> next != NULL ){
            ListNode* front = temp -> next ;
            int num = gcd(temp -> val , front -> val); 
          
            ListNode* newNode = new ListNode(num);
            temp -> next = newNode ;
            newNode -> next = front ;
            temp = temp -> next -> next  ;

        }
        return head ;    
    }
};