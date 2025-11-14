class Solution {
    public String reverseWords(String s) {
        String[] parts = s.split("\\s+") ;
        StringBuilder ans = new StringBuilder() ;
        for(int i = 0 ; i < parts.length ; i++){
            StringBuilder sb = new StringBuilder() ;
            sb.append(parts[i]);
            sb.reverse() ;
            ans.append(sb) ;
            ans.append(" ") ;
        }
        return ans.toString().substring(0,s.length()); 
    }
}