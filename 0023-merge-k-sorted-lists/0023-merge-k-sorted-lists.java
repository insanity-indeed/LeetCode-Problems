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
        ArrayList<Integer> arr = new ArrayList<>() ;
        for(ListNode list : lists){
            ListNode temp = list ;
            while(temp != null){
                arr.add(temp.val) ;
                temp = temp.next ;
            }
        }
        Collections.sort(arr) ; 
        ListNode dummy = new ListNode(1) ;
        ListNode temp = dummy ;
        for(int i : arr){
            ListNode newNode = new ListNode(i) ;
            temp.next = newNode ;
            temp = temp.next ;
        }
        return dummy.next ;
    }
}