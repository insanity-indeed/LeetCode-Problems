/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        /*ListNode* temp = head ;
        map<ListNode* , int> mpp ;
        while(temp != NULL){
            if(mpp.find(temp) != mpp.end())
                return 1 ;
            mpp[temp] = 1 ;
            temp = temp -> next ;
        }
        return 0 ;  */ 
        ListNode* slow = head ;
        ListNode* fast = head ;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next ;
            fast = fast -> next -> next ;
            if(fast == slow )
                return 1 ;
        }
        return 0 ;
    }
};