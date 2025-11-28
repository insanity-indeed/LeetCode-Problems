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
    ListNode reverse(ListNode head){
        if(head == null || head.next == null)
            return head ;

        ListNode newHead = reverse(head.next) ;
        ListNode nextNode = head.next ;
        nextNode.next = head ;
        head.next = null ;
        return newHead ;
    }
    public ListNode reverseKGroup(ListNode head, int k) {
        ListNode temp = head ;
        ListNode prev = temp ;
        ListNode nextNode = null ;

        while(temp != null){
            ListNode kNode = temp ;
            int len = 1 ;

            while(len < k && kNode != null){
                kNode = kNode.next ;
                len++ ;
            }

            if(kNode == null){
                if(prev != null)
                    prev.next = temp ;
                break ;
            }
            
            nextNode = kNode.next ;
            kNode.next = null ;

            ListNode newHead = reverse(temp);

            if(temp == head){
                head = kNode ;
            }
            else
                prev.next = kNode ;
 
            prev = temp ;
            temp = nextNode ; 
        }
        
        return head ;
    }
}