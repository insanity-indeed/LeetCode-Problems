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
    public ListNode merge(ListNode left ,ListNode right){
        //if(left == null || right == null)   return null ;
        ListNode temp1 = left ;
        ListNode temp2 = right ;
        ListNode dummy = new ListNode(-1);
        ListNode temp = dummy;
        
        while(left != null && right != null){
            if(left.val <= right.val){
                temp.next = left ; 
                left = left.next ;
            }
            else{
                temp.next = right ;
                right = right.next ;
            }
            temp = temp.next ;
        }
        temp.next = (left != null) ? left : right;
        return dummy.next ;
    }
    public ListNode middle(ListNode head){
        ListNode slow = head ;
        ListNode fast = head.next ;
        while(fast != null && fast.next != null){
            slow = slow.next ;
            fast = fast.next.next ;
        }
        return slow ;
    }
    public ListNode sortList(ListNode head) {
        if(head == null || head.next == null)
            return head ;

        ListNode mid = middle(head) ;
        ListNode left = head ;
        ListNode right = mid.next ;
        mid.next = null ;

        left = sortList(left) ;
        right = sortList(right);
        
        
        return merge(left,right) ;
        
    }
}