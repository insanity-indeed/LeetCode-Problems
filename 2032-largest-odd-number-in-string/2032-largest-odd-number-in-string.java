class Solution {
    public String largestOddNumber(String num) {
        StringBuilder sb = new StringBuilder() ;
        String ans = "" ;
        int index = -1 ;
        int n = num.length() - 1 ;
        for(int i = n ; i >= 0 ; i--){
            int temp = num.charAt(i) - '0';
            if( temp % 2 != 0){
                index = i ;
                break ;
            }
        }
        return (index == -1) ? "" : num.substring( 0 , index+1);
    }
}