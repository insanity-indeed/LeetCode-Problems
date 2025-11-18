class Solution {
    public String stringHash(String s, int k) {
        int sum = 0 ;
        int cnt = 0 ;
        StringBuilder sb = new StringBuilder() ;
        for(int i = 0 ; i < s.length() ; i++){
            cnt++ ;
            sum += s.charAt(i) - 'a' ; 
            if((i+1)%k == 0){
                char ch = 'a' ;
                ch += (sum % 26) ;
                sb.append(ch) ;
                cnt = 0 ;
                sum = 0 ;
            }  
        }   
        return sb.toString() ;
    }
}