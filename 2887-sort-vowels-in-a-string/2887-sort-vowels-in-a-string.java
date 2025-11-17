class Solution {
    public String sortVowels(String s) {
        String vow = "" ;
        for(int i = 0 ; i < s.length() ; i++){
            char ch = s.charAt(i);
            ch = Character.toLowerCase(ch) ;
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vow += s.charAt(i) ;
            }
        }
        char[] temp = vow.toCharArray() ;
        Arrays.sort(temp) ;
        int ind = 0 ;
        StringBuilder str = new StringBuilder() ;
        for(int i = 0 ; i < s.length() ; i++){
            char ch = s.charAt(i) ;
            ch = Character.toLowerCase(ch) ;
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                str.append(temp[ind++]) ;
            }
            else
                str.append(s.charAt(i)) ;
        }
        return str.toString() ;
    }
}