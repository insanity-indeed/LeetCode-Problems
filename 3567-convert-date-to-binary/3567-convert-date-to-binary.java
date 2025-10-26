class Solution {
    public String convertToBinary(String date , int start , int end){
        int num = 0 ;
        for(int i = start ; i < end ; i++){
            num = num *10 + (date.charAt(i) - '0') ;
        }
        if(num == 0)    return "0" ;
        StringBuilder sb = new StringBuilder() ;
        while (num > 0) {
            sb.append(num % 2);
            num /= 2;
        }
        return sb.reverse().toString() ;
    }
    public String convertDateToBinary(String date) {
        String res = "" ; 
        res += convertToBinary(date,0,4) ;
        res += '-' ;
        res += convertToBinary(date,5,7) ;
        res += '-' ;
        res += convertToBinary(date,8,10) ;
        return res;
    }
}