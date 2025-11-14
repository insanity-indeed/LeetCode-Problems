class Solution {
    public String addBinary(String a, String b) {
        StringBuilder str = new StringBuilder() ;
        int i = a.length() - 1 ;
        int j = b.length() - 1 ;
        int carry = 0 ;
        while(i >= 0 || j >= 0){
            char first = i >= 0 ? a.charAt(i--) : '0' ;
            char second = j >= 0 ? b.charAt(j--) : '0' ;

            if(first == '0' && second == '0'){
                if(carry == 0)  str.append("0") ;
                else    str.append("1") ;
                carry = 0 ;
            }
            else if((first == '0' && second == '1') || (first == '1' && second == '0')){
                if(carry == 0)  str.append("1") ;
                else{
                    str.append("0") ;
                    carry = 1 ;
                }    
            }
            else{
                if(carry == 0){
                    str.append("0");
                }
                else
                    str.append("1") ;
                carry = 1 ;
            }
        }
        if(carry == 1)  str.append("1");
        str.reverse() ;
        return str.toString() ;
    }
}