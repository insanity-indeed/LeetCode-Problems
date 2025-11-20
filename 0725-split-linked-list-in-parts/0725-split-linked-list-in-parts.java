/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode[] splitListToParts(ListNode head, int k) {
        ListNode[] ans = new ListNode[k];
        ListNode temp = head ;
        int index = 0 ;
        int cnt = 0 ;

        //calculating length 
        while(temp != null){
            cnt++ ;
            temp = temp.next ;
        }

        ListNode prev = head ;
        ans[0] = head ;
        temp = head ;

        while(temp != null){

            ans[index++] = temp ;
            int len = cnt / k ;

            if(cnt % k != 0){
                len++;
                cnt-- ;
            }
            
            while(len != 0){
                len-- ;
                prev = temp ;
                temp = temp.next ;
            }
            
            prev.next = null ;
        }

        return ans ;    
    }
}