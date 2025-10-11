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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int, int> mpp ;
        ListNode* temp = head ;
        while(temp){
            if(mpp.find(temp -> val) != mpp.end()){
                mpp[temp -> val]++;
            }
            else
                mpp[temp -> val] = 1 ;
            temp = temp -> next ;
        }
        ListNode* dummy = new ListNode(-1) ;
        temp = dummy;
        for(auto i : mpp){
            if(i.second == 1){
                temp -> next = new ListNode(i.first);
                temp = temp -> next ;
            }
            
        }
        return dummy -> next ;
    }
};