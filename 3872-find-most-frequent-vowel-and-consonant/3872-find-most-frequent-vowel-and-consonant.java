class Solution {
    public int maxFreqSum(String s) {
        int[] freq = new int[26] ;

        for(int i = 0 ; i < s.length() ; i++){
            char c = s.charAt(i) ;
            freq[c - 'a']++ ;
        }

        int maxC = -1 ;
        int maxV = -1 ;

        for(int i = 0 ; i < 26 ; i++){
            
            if(i == 0 || i == 4 || i == 8 || i == 14 || i == 20)
                maxV = Math.max(maxV , freq[i]) ;
            else
                maxC = Math.max(maxC , freq[i]) ;
        }

        return maxC + maxV ;
    } 
}