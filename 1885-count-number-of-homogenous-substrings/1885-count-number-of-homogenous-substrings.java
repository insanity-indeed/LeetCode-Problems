class Solution {
    public int countHomogenous(String s) {
        final int M = 1_000_000_007 ;
        long ans = 0 ;
        long cnt = 0 ;
        char prev = '0' ;
        for(int i = 0 ; i < s.length() ; i++){
            char ch = s.charAt(i) ;
            if(ch == prev){
                cnt++ ;
            }
            else{
                cnt = 1 ;
                prev = ch ;
            }
            ans = (ans + cnt) % M ;
        }
        return (int) ans ;
    }
}