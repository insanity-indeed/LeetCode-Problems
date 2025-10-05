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
    ListNode* reverseLL(ListNode* temp , ListNode* prev){
        if(temp == NULL)    return prev ;
        ListNode* front = temp -> next ;
        temp -> next = prev ;
        prev = temp ;
        temp = front;
        return reverseLL(temp,prev);
    }
    ListNode* reverseList(ListNode* head) {
        /*if(head == NULL)    return head ;
        vector<int> v ;
        ListNode* temp = head ;
        while(temp != NULL){
            v.push_back(temp -> val);
            temp = temp -> next ;
        }
        reverse(v.begin(),v.end());
        ListNode* newHead = new ListNode(v[0]);
        ListNode* newTemp = newHead ;
        for(int i = 1 ; i < v.size() ; i++){
            ListNode* newNode = new ListNode(v[i]);
            newTemp-> next = newNode ;
            newTemp = newTemp -> next ;
        } 
        return newHead ;
        // Time Complexity -> O(3n)
        Space Complexity -> O(n)
        */
        /*if(head == NULL)    return head ;
        ListNode* temp = head ;
        ListNode* prev = NULL ;
        while(temp != NULL){
            ListNode* front = temp -> next ;
            temp -> next = prev ;
            prev = temp ;
            temp = front ;
        }
        return prev ;*/
        if(head == NULL)    return head ;
        ListNode* temp = head , *prev = NULL ;
       return reverseLL(temp,prev);
        //return prev;
    }
};