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
    /*ListNode* reverseLL(ListNode* head){
        if(head == NULL || head -> next == NULL )
            return head ;
        ListNode* newHead = reverseLL(head -> next) ;
        ListNode* front = head -> next ;
        front -> next = head ;
        head -> next = NULL ;
        return newHead ;
    }*/
    ListNode* removeNodes(ListNode* head) {
        /*ListNode* temp = head ;
        stack<ListNode*> st;
        while(temp != NULL){
            st.push(temp);
            temp = temp -> next ;
        }
        temp = st.top();
        int maxNode = temp -> val;
        st.pop();
        ListNode* newHead = new ListNode(temp -> val);
        while(!st.empty()){
            temp = st.top();
            st.pop();
            if(temp -> val >= maxNode){
                maxNode = temp -> val ;
                ListNode* newNode = new ListNode(temp -> val);
                newNode -> next = newHead;
                newHead = newNode ;
            }
            else{
                continue;
            }
        }
        return newHead;*/
        /*ListNode* newHead = reverseLL(head);
        ListNode* temp = newHead ;
        ListNode* prev = NULL ;
        int maxNode = temp -> val ;
        prev = temp ;
        temp = temp -> next ;

        while(temp != NULL){
            if(temp -> val >= maxNode){
                maxNode = temp -> val ;
                prev = temp ;  
            }
            else{
                prev -> next = temp -> next ;
            }
            
            temp = temp -> next ;
        }
        newHead = reverseLL(newHead);
        return newHead ;*/

        if(head == NULL || head -> next == NULL)
            return head ;
        
        ListNode* newNode = removeNodes(head -> next);

        if(head -> val < newNode -> val){
            return newNode ;
        }

        head -> next = newNode ;
        return head ;

    }
};