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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head -> next == NULL)    return NULL ;
        ListNode* slow = head ;
        ListNode* fast = head ;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next ;
            fast = fast -> next -> next ;
        }
        ListNode* temp = head ;
        ListNode* prev = NULL ;
        while(temp != NULL){
            if(temp == slow){
                prev -> next = temp -> next ;
                break;
            }
            prev = temp ;
            temp = temp -> next ;
        }
        return head ;
    }
};