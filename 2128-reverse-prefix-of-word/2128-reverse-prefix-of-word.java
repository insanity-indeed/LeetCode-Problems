class Solution {
    public String reversePrefix(String word, char ch) {
        int pos = -1 ;
        for(int i = 0 ; i < word.length() ; i++){
            if(word.charAt(i) == ch){
                pos = i ;
                break ;
            }
        }
        StringBuilder sb = new StringBuilder() ;
        //String sb = "" ;
        
        for(int i = pos ; i >= 0 ; i--){
            sb.append(word.charAt(i));
            //sb += word.charAt(i) ;
        }
        for(int i = pos + 1 ; i < word.length() ; i++){
            sb.append(word.charAt(i));
           // sb += word.charAt(i) ;
        }
        return sb.toString() ;
    }
}