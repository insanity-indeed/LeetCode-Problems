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
    bool isPalindrome(ListNode* head) {
        /*ListNode* temp = head ;
        vector<int> vec ;
        while(temp != NULL){
            vec.push_back(temp -> val) ;
            temp = temp -> next ;
        }
        int s = 0 , e = vec.size() - 1 ;
        while(s <= e){
            if(vec[s++] != vec[e--])
                return 0 ;
        }
        return 1;*/
        ListNode* slow = head ;
        ListNode* fast = head ;
        while(fast -> next != NULL && fast -> next -> next != NULL){
            slow = slow -> next ;
            fast = fast -> next -> next ;
        }
        ListNode* newHead = reverseList(slow -> next);
        ListNode* temp1 = head ;
        ListNode* temp2 = newHead ;
        while(temp2 != NULL){
            if(temp1 -> val != temp2 -> val)
                return 0 ;
            temp1 = temp1 -> next ;
            temp2 = temp2 -> next ;
        }
        reverseList(slow -> next);
        return 1 ;

    }
};