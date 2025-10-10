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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL)
            return NULL ;
        
        ListNode* temp1 = headA ;
        ListNode* temp2 = headB ;
        map<ListNode* , int> mpp ;
        
        while(temp1 != NULL && temp2 != NULL){
            if(mpp.find(temp1) != mpp.end())
                return temp1 ;
            mpp[temp1] = 1 ;
            if(mpp.find(temp2) != mpp.end())
                return temp2 ;
            mpp[temp2] = 1 ;
            temp1 = temp1 -> next ;
            temp2 = temp2 -> next ;
        }
        if(temp1){
            while(temp1){
                 if(mpp.find(temp1) != mpp.end())
                return temp1 ;
            mpp[temp1] = 1 ;
            temp1 = temp1 -> next ;
            }
        }
        else{
            while(temp2){
            if(mpp.find(temp2) != mpp.end())
                return temp2 ;
            mpp[temp2] = 1 ;
            temp2 = temp2 -> next ;
            }
        }
        
        return NULL ;    
    }
};