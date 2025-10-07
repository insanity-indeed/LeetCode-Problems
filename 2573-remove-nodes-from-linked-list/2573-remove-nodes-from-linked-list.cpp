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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = head ;
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
        return newHead;
    }
};