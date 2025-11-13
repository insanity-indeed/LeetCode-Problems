class Solution {
    public String truncateSentence(String s, int k) {
        int num = 0 ;
        int pos = 0 ;
        for(int i = 0 ; i < s.length() ; i++){
            if(s.charAt(i) == ' ')
                pos++ ;

            if(pos == k){
                num = i ;
                break ;
            }
            
        }
        if(pos + 1 == k)    num = s.length()  ;
        return s.substring(0,num);
    }
}