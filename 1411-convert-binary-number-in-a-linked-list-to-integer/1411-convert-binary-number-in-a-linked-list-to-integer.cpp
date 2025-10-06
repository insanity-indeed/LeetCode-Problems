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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head ;
        ListNode* prev = NULL ;
        while(temp != NULL){
            ListNode* front = temp -> next ;
            temp -> next = prev ;
            prev = temp ;
            temp = front ;
        }
        long long int ans = 0 ;
        int cnt = 0 ;
        temp = prev ;
        while(temp != NULL){
            int nos = temp -> val ;
            ans += nos * pow(2,cnt);
            cnt++;
            temp = temp -> next ;
        }
        return ans;
    }
};