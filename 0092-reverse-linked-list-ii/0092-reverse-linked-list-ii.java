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
    ListNode reverseList(ListNode head){
        if(head == null || head.next == null)   return head ;

        ListNode newHead = reverseList(head.next) ;
        ListNode front = head.next ;
        front.next = head  ;
        head.next = null ;

        return newHead ;
    }
    public ListNode reverseBetween(ListNode head, int left, int right) {
        if(head == null || head.next == null)   return head ;
        if(left == right)   return head ;
        ListNode first = null ;
        ListNode prev = null ;
        ListNode last = null ;
        ListNode temp = head ;
        int cnt = 1 ;

        while(cnt < left){
            prev = temp ;
            temp = temp.next ;
            cnt++ ;
        }

        first = temp ;

        while(cnt < right){
            temp = temp.next ;
            cnt++ ;
        }

        last = temp ;

        ListNode nextNode = last.next ;
        last.next = null ;

        ListNode newHead = reverseList(first) ;

        if(prev != null)
            prev.next = newHead ;
        else
            head = newHead ;

        first.next = nextNode ;        

        return head ;
    }
}