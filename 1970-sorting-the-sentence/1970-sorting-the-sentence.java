class Solution {
    public String sortSentence(String s) {
        String[] parts = s.split("\\s+") ;
        int n = parts.length ;
        String[] ans = new String[n] ;

        for(String str : parts){
            int len = str.length() - 1 ;
            int num = str.charAt(len) - '0';
            ans[num - 1] = str.substring(0,len );
        }
        String res = ans[0] ;
        for(int i = 1 ; i < n ; i++){
            String str = ans[i] ;
            res += " " ;
            res += str ;
        }
        
        return res;
    }
}