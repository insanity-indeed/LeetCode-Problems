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
        
        ListNode newHead = reverseList(head.next) ;
        ListNode front = head.next ;
        front.next = head ;
        head.next = null ;
        return newHead ;
    }
    public ListNode findMid(ListNode head){
        ListNode slow = head ;
        ListNode fast = head ;
        while(fast.next != null && fast.next.next != null){
            fast = fast.next.next ;
            slow = slow.next ;
        }
        return slow ;
    }
    public boolean isPalindrome(ListNode head) {
        ListNode mid = findMid(head) ;
        ListNode temp = head ;
        ListNode newHead = reverseList(mid.next) ;
        ListNode temp2 = newHead ;

        while(temp2 != null){
            if(temp.val != temp2.val)
                return false ;
            temp = temp.next ;
            temp2 = temp2.next ;
        }    
        mid.next = reverseList(newHead) ;
        return true ;
    }
}