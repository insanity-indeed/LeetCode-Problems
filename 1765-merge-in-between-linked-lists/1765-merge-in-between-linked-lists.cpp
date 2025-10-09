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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* endList2 = NULL ;
        ListNode* temp2 = list2 ;
        while(temp2 -> next != NULL){
            temp2 = temp2 -> next ;
        }
        endList2 = temp2 ;
        ListNode* cut1 = NULL ;
        ListNode* cut2 = NULL ;
        ListNode* temp = list1 ;
        int cnt = 0 ;
        while(temp != NULL){
            if(cnt + 1 == a){
                cut1 = temp ;
            }
            if(cnt - 1 == b){
                cut2 = temp ;
                break ;
            }
            cnt++;
            temp = temp -> next ; 
        }
        cut1 -> next = list2 ;
        endList2 -> next = cut2 ;
        return list1 ;
    }
};