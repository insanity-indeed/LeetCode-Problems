class Solution {
    // public boolean isUnique(String sb){
    //     int[] freq = new int[128] ;
    //     for(int i = 0 ; i < sb.length() ; i++)  freq[sb.charAt(i)]++ ;
    //     for(int i = 0 ; i < 128 ; i++){
    //         if(freq[i] > 1) return false ;
    //     }
    //     return true ;
    // }
    public int lengthOfLongestSubstring(String s) {
        if(s.length() == 0)    return 0 ;
        if(s.length() == 1)    return 1 ;
        int left = 0 ;
        int right = 0 ;
        int len = 0 ;
        int maxLen = 0 ;

        //StringBuilder sb = new StringBuilder() ;
        HashMap<Character, Integer> seen = new HashMap<>() ;
        
        while(right < s.length()){
            if(seen.containsKey(s.charAt(right))){
                left = Math.max(seen.get(s.charAt(right))+1,left) ;   
            }
            seen.put(s.charAt(right) , right );
            maxLen = Math.max(maxLen , right - left + 1);
            right++ ;
        }   
        return maxLen ; 
    }
}