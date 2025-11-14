class Solution {
    public String toLowerCase(String s) {
        StringBuilder ans = new StringBuilder() ;
        for(int i = 0 ; i < s.length() ; i++){
            char a = s.charAt(i);
            if(a >= 'A' && a <= 'Z')
                a += 'a' - 'A' ; 
            ans.append(a) ;
        }
        return ans.toString() ;
    }
}