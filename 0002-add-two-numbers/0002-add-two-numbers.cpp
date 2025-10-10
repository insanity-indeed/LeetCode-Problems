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
    ListNode* reverseList(ListNode* head){
        if(head == NULL || head -> next == NULL)
            return head ;
        ListNode* newHead = reverseList(head -> next);
        ListNode* front = head -> next ;
        front -> next = head ;
        head -> next = NULL ;
        return newHead ;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       //l1 = reverseList(l1) ;
       //l2 = reverseList(l2) ;
       ListNode* t1 = l1 ;
       ListNode* t2 = l2 ;
       ListNode* dummy = new ListNode(-1);
       ListNode* temp = dummy ;
       int carry = 0 ;
       while(t1 && t2){
            int sum = t1 -> val + t2 -> val + carry ;
            temp -> next = new ListNode(sum % 10) ;
            carry = sum / 10 ;
            temp = temp -> next ;
            t1 = t1 -> next ;
            t2 = t2 -> next ;
       }
        if(t1){
            while(t1){
            int sum = t1 -> val + carry ;
            temp -> next = new ListNode(sum % 10) ;
            carry = sum / 10 ;
            temp = temp -> next ;
            t1 = t1 -> next ;
            }
        }
        else{
            while(t2){
            int sum = t2 -> val + carry ;
            temp -> next = new ListNode(sum % 10) ;
            carry = sum / 10 ;
            temp = temp -> next ;
            t2 = t2 -> next ;
            }
        }
        dummy = dummy -> next ;
        //dummy -> next = reverseList(dummy -> next);
        if(carry != 0){
            temp -> next = new ListNode(carry) ;
        }
        return dummy ;
    }
};