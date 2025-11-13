class Solution {
    public int mostWordsFound(String[] sentences) {
        int words = 0 ;
        for(String str : sentences){
            int cnt = 0 ;
            for(int i = 0 ; i < str.length() ; i++){
                if(str.charAt(i) == ' ')    cnt++ ;
            }
            words = Math.max(words, cnt);
        }
        return words + 1 ;
    }
}