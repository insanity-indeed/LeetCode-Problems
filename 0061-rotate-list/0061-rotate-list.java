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
    public ListNode rotateRight(ListNode head, int k) {
        if(head == null || head.next == null)    return head ;
        
        ListNode newHead = head ;
        ListNode temp = head ;
        ListNode prev = null ;
        ListNode last = null ;
        int len = 0 ;

        while(temp != null){
            len++ ;
            last = temp ;
            temp = temp.next ;
        }

        k = k % len ;
        if(k == 0)  return head ;

        while(len != k){
            len-- ;
            prev = newHead ;
            newHead = newHead.next ;
        }

        last.next = head ;
        prev.next = null ;
        return newHead ;
    }
}