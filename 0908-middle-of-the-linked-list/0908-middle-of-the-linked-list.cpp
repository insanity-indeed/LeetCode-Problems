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
    ListNode* middleNode(ListNode* head) {
        int size = 0 ;
        ListNode* temp = head ;
        
        while(temp != NULL){
            size++;
            temp = temp -> next ;
        }

        int k = size/2 + 1 ;
        ListNode* sol = head;
        int cnt = 0 ;

        while(sol){
            cnt++;
            if(cnt == k  ) break;
            sol = sol -> next ;
        }

        return sol;
    }
};