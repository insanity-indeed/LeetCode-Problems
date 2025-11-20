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
        
        ListNode newHead = reverse(head.next);
        ListNode nextNode = head.next ;
        nextNode.next = head ;
        head.next = null ;
        return newHead ;
    }
    public void reorderList(ListNode head) {
        if(head == null || head.next == null)   return ;

        ListNode slow = head ;
        ListNode fast = head ;

        while(fast != null && fast.next != null){
            slow = slow.next ;
            fast = fast.next.next ;
        }

        ListNode temp2 = reverse(slow.next) ;
        
        slow.next = null ;

        ListNode temp1 = head ;
        

        while(temp2 != null){
            ListNode front = temp1.next ;
            ListNode front2 = temp2.next ;

            temp1.next = temp2 ;
            temp2.next = front ;
           //

            temp1 = front ;
            temp2 = front2 ;
        }

     

    }
}