class Solution {
    public int numSub(String s) {
        final int mod=1_000_000_007;
        long cnt = 0 ;
        long ans = 0 ;
        for(int i = 0 ; i < s.length() ; i++){
            char ch = s.charAt(i) ;
            if(ch == '1'){
                cnt++ ;
                ans = (ans + cnt) % mod;
            }
            else 
                cnt = 0 ;
        }
       // ans += (cnt * (cnt + 1)) / 2 ;
        return (int)ans ;
    }
}