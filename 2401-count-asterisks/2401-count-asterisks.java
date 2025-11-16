class Solution {
    public int countAsterisks(String s) {
        int cntdash = 0 ;
        int cnt = 0 ;
        for(int i = 0 ; i < s.length() ; i++){
            char ch = s.charAt(i) ;
            if(ch == '|')
                cntdash++ ;
            if(ch == '*' && cntdash % 2 == 0)
                cnt++ ;
        }
        return cnt ;
    }
}