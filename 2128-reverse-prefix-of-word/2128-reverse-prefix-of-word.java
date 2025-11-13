class Solution {
    public String reversePrefix(String word, char ch) {
        int pos = word.indexOf(ch) ;
        
        if(ch == -1)    return word ;

        StringBuilder sb = new StringBuilder(word.substring(0,pos+1)) ;
        sb.reverse() ;
        sb.append(word.substring(pos+1));
        return sb.toString() ;
    }
}