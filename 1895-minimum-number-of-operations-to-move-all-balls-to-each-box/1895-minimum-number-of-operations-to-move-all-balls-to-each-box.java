class Solution {
    public int findOps(String s , int i){
        int cnt = 0 ;
        for(int j = 0 ; j < s.length() ; j++){
            if(i == j)  continue ;
            char c = s.charAt(j) ;
            if(c == '1'){
                cnt += Math.abs(i-j);
            }
        }
        return cnt ;
    }
    public int[] minOperations(String boxes) {
        int n = boxes.length() ;
        int[] res = new int[n] ;
        for(int i = 0 ; i < n ; i++){
            res[i] = findOps(boxes , i) ;
        }
        return res ;
    }
}