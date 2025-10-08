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
        /*if(head == NULL || head -> next == NULL)    return head;
        ListNode* head1 = new ListNode(0);
        ListNode* head2 = new ListNode(0);
        ListNode* temp = head ;
        ListNode* temp1 = head1 ;
        ListNode* temp2 = head2 ;
        int cnt = 0 ;
        while(temp != NULL){
            cnt++;
            if(cnt % 2 != 0){
                ListNode* newNode = new ListNode(temp -> val);
                temp1 -> next = newNode ;
                temp1 = temp1 -> next ; 
            }
            else{
                ListNode* newNode = new ListNode(temp -> val);
                temp2 -> next = newNode ;
                temp2 = temp2 -> next ; 
            }
            temp = temp -> next ;
        } 
        head1 = head1 -> next ;
        head2 = head2 -> next ;
        temp1 = head1 ;
        while(temp1 -> next != NULL){
            temp1 = temp1 -> next ;
        } 
        temp1 -> next = head2 ;
        return head1 ;  */
        if(head == NULL || head -> next == NULL)    return head ;
        ListNode* odd = head ;
        ListNode* even = head -> next ;
        ListNode* temp = head -> next ;
        while(odd -> next != NULL && even -> next != NULL){
            odd -> next = odd -> next -> next ;
            odd = odd -> next ;
            even -> next = even -> next -> next ;
            even = even -> next ;
        }
        odd -> next = temp ;
        return head ;
    }
};