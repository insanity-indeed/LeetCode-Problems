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
    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head ;
        ListNode* fast = head -> next ;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next ;
            fast = fast -> next -> next ;
        }
        return slow ;
    }
    int pairSum(ListNode* head) {
        if(head == NULL )   return NULL ;
        int maxSum = 0 ;
        ListNode* mid = findMiddle(head);
        mid = reverseList(mid);
        ListNode* temp = head ;
        ListNode* temp2 = mid;
        while(temp != NULL){
            int sum = temp -> val + temp2 -> val ;
            maxSum = max(maxSum , sum);
            temp = temp -> next ;
            temp2 = temp2 -> next ;
        }
        mid = reverseList(mid);
        return maxSum ;
    }
};