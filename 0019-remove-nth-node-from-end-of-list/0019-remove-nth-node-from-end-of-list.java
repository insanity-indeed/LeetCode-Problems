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
    public ListNode reverseList(ListNode head){
        if(head == null || head.next == null)
            return head ;
        
        ListNode newHead = reverseList(head.next);
        ListNode front = head.next ;
        front.next = head ;
        head.next = null ;
        return newHead ;
    }
    public ListNode removeNthFromEnd(ListNode head, int n) {
        //if(head == null || head.next == null)   return null ;
        head = reverseList(head);
        if(n == 1) {
            head = head.next ;
            return reverseList(head) ;
            
        } 
        int cnt = 0 ;
        ListNode temp = head ;
        ListNode prev = null ;
        while(temp != null){
            cnt++ ;
            if(cnt == n){
                prev.next = temp.next ;
                break ;
            }
            prev = temp ;
            temp = temp.next ;
        }
        
        return reverseList(head) ;
    }
}