class Solution {
    public boolean checkIfPangram(String sentence) {
        /*int[] freq = new int[26] ;
        for(int i = 0 ; i < sentence.length() ; i++){
            char a = sentence.charAt(i) ;
            freq[a-'a']++ ;
        }

        for(int i : freq){
            if(i == 0)  return false ;
        }*/

        for(char c = 'a' ; c <= 'z' ; c++){
            if(sentence.indexOf(c) == -1)   return false ;
        }

        return true ;
    }
}