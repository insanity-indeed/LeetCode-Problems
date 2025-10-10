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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> s(nums.begin() , nums.end()) ;
        ListNode* temp = head ;
        ListNode* dummy = new ListNode(-1) ;
        dummy -> next = head ;
        ListNode* prev = dummy ;
        while(temp){
            if(s.count(temp-> val))
                prev -> next = temp -> next ;
            else
                prev = temp ;
            temp = temp -> next ;
        }
        return dummy -> next ;
    }
};