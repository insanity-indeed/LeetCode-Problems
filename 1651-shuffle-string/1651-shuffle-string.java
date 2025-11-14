class Solution {
    public String restoreString(String s, int[] indices) {
        int len = indices.length ;
        char[] c = new char[len] ;
        
        if(s.length() != len)   return s ;

        for(int i = 0 ; i < len ; i++){
            c[indices[i]] = s.charAt(i) ;
        }

        String str = new String(c) ;
        return str ;
    }
}