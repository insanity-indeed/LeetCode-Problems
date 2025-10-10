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
        set<int> s ;
        for(int i = 0 ; i < nums.size() ; i++){
            s.insert(nums[i]);
        }
        ListNode* temp = head ;
        ListNode* prev = NULL ;
        while(temp){
            if(s.find(temp -> val) != s.end()){
                if(prev == NULL){
                    head = head -> next ;
                    temp = head ;
                }
                else{
                    prev -> next = temp -> next ;
                    temp = temp -> next ;
                }
            }
            else{

            prev = temp ;
            temp = temp -> next ;
            }
        }
        return head ;
    }
};