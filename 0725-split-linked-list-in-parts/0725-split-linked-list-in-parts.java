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
        int len = cnt / k ;
        int extra = cnt % k ;
        temp = head ;

        while(temp != null && index < k){

            ans[index++] = temp ;
            int t = len ;
            
            if(extra != 0){
                t++ ;
                extra-- ;
            }
            
            for(int i = 0 ; i < t ; i++){
                prev = temp ;
                temp = temp.next ;
            }

            if (prev != null)
                prev.next = null ;
        }

        return ans ;    
    }
}