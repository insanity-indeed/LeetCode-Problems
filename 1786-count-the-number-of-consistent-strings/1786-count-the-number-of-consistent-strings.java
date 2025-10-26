class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        int ans = 0 ;
        for(String word : words){
            int i = 0 ;
            for(; i < word.length() ; i++){
                if(!allowed.contains(String.valueOf(word.charAt(i))))   
                    break ;
            }
            if(i == word.length())    ans++ ;
        }
        return ans ;
    }
}