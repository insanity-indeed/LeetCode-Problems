class Solution {
    public int[] minOperations(String boxes) {
        int balls = 0 ;
        int moves = 0 ;
        int n = boxes.length() ;
        int[] res = new int[n] ;
        for(int i = 0 ; i < n ; i++){
            res[i] += moves + balls ;
            moves += balls ;
            balls += boxes.charAt(i) - '0' ;
        }
        balls = moves = 0 ;
        for(int i = n - 1 ; i >= 0 ; i--){
            res[i] += moves + balls ;
            moves += balls ;
            balls += boxes.charAt(i) - '0' ;
        } 
        return res ;
    }
}