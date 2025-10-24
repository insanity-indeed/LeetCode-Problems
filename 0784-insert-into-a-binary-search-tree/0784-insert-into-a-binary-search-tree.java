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
    public TreeNode insertIntoBST(TreeNode node, int val) {
        TreeNode newNode = new TreeNode(val) ;
        if(node == null)    return newNode ;
        TreeNode root = node ;
        TreeNode prev = null ;
        while(root != null){
            prev = root ;
            if(root.val < val){
                root = root.right ;
            }
            else{
                root = root.left ;
            }
        }
        if(prev.val < val){
            prev.right = newNode ;
        }
        else{
            prev.left = newNode ;
        }
        return node; 
    }
}