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
    public void inorder(TreeNode root ,ArrayList<Integer> res){
        if(root == null)
            return;
        inorder(root.left,res);
        res.add(root.val) ;
        inorder(root.right,res);
    }
    public int kthSmallest(TreeNode root, int k) {
        int num = Integer.MAX_VALUE ;
        ArrayList<Integer> nodes = new ArrayList<>() ;
        inorder(root,nodes);
        int cnt = 1 ;
        for(int node : nodes){
            if(cnt == k)
                return node ;
            else
                cnt++ ;
        }
        return -1 ;
    }
}