class Solution {
    public int myAtoi(String s) {
        long ans = 0 ;;
        int i = 0 ;
        if (s == null || s.length() == 0) {
            return 0;
        }
        final int INT_MAX = Integer.MAX_VALUE;
        final int INT_MIN = Integer.MIN_VALUE;
        while(i < s.length() && s.charAt(i) == ' ')
            i++ ;
        if(i == s.length())
            return 0 ;
        
        int sign = 1 ;
        if(s.charAt(i) == '+'){
            i++ ;
        }
        else if(s.charAt(i) == '-'){
            sign = -1 ;
            i++ ;
        
        }
        

        while(i < s.length() && Character.isDigit(s.charAt(i))){
            ans = ans * 10 + (s.charAt(i) - '0') ;
            if (sign * ans <= INT_MIN) {
                return INT_MIN;
            }
            if (sign * ans >= INT_MAX) {
                return INT_MAX;
            }
            i++ ;
        }
        return (int)(ans*sign) ;

    }
}