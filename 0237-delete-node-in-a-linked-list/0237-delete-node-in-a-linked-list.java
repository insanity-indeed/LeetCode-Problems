/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public void deleteNode(ListNode node) {
        ListNode temp = node ;
        node.val = node.next.val;   // Copy the value from the next node
        node.next = node.next.next; 
        
    }
}