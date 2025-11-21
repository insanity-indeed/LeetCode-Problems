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
    public ListNode mergeKLists(ListNode[] lists) {
        PriorityQueue<ListNode> arr = new PriorityQueue<>((a,b) -> a.val - b.val) ;
        for(ListNode list : lists){
            if(list != null)
                arr.add(list) ;
        }
        
        
        ListNode dummy = new ListNode(1) ;
        ListNode temp = dummy ;
        while(!arr.isEmpty()){
            ListNode newNode = arr.poll() ;
            temp.next = newNode ;
            temp = temp.next ;
            if(newNode.next != null)
                arr.add(newNode.next) ;
        }
        return dummy.next ;
    }
}