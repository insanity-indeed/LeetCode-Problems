class Solution {
    public String reverseOnlyLetters(String s) {
        char[] c = s.toCharArray() ;
        int left = 0 ; 
        int right = s.length() - 1 ;
        while(left <= right){
            
            if(!((c[left] >= 'a' && c[left] <= 'z') || (c[left] >= 'A' && c[left] <= 'Z')) ){
                left++ ;
                continue;
            }

            if(!((c[right] >= 'a' && c[right] <= 'z') || (c[right] >= 'A' && c[right] <= 'Z'))){
                right-- ;
                continue;
            }

            char temp = c[left] ;
            c[left] = c[right] ;
            c[right] = temp ;
            left++ ;
            right-- ;
    
        }
        String ans = new String(c) ;
        return ans ;   
    }
}