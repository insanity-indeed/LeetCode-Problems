class Solution {
    public int minPartitions(String n) {
        int max = -1 ;
        for(int i = 0 ; i < n.length() ; i++){
            if(n.charAt(i) == '9')  return 9 ;
            else max = Math.max(max,n.charAt(i)-'0') ;
        }
        return max ;
    }
}