/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int kthSmallest(TreeNode root, int k) {
        ArrayList<Integer> nodes = new ArrayList<>() ;
        Stack<TreeNode> st = new Stack<>() ;
        int cnt = 0 ;
        TreeNode node = root ;
    
        while(true){
            if(node != null){
                st.push(node) ;
                node = node.left ;
            }
            else{
                if(st.isEmpty())    break ;
                node = st.pop() ;
                cnt++ ;
                if(cnt == k)
                    return node.val ;
                node = node.right ;   
            }
        }
        return -1 ;
    }
}