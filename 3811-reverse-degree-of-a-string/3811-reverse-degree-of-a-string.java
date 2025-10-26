class Solution {
    public int getVal(char c){
        if(c == 'a')    return 26 ;
        if(c == 'b')    return 25 ;
        if(c == 'c')    return 24 ;
        if(c == 'd')    return 23 ;
        if(c == 'e')    return 22 ;
        if(c == 'f')    return 21 ;
        if(c == 'g')    return 20 ;
        if(c == 'h')    return 19 ;
        if(c == 'i')    return 18 ;
        if(c == 'j')    return 17 ;
        if(c == 'k')    return 16 ;
        if(c == 'l')    return 15 ;
        if(c == 'm')    return 14 ;
        if(c == 'n')    return 13 ;
        if(c == 'o')    return 12 ;
        if(c == 'p')    return 11 ;
        if(c == 'q')    return 10 ;
        if(c == 'r')    return 9 ;
        if(c == 's')    return 8 ;
        if(c == 't')    return 7 ;
        if(c == 'u')    return 6 ;
        if(c == 'v')    return 5 ;
        if(c == 'w')    return 4 ;
        if(c == 'x')    return 3 ;
        if(c == 'y')    return 2 ;
        if(c == 'z')    return 1 ;
        return 0 ;
    }
    public int reverseDegree(String s) {
        int ans = 0 ;
        for(int i = 0 ; i < s.length() ; i++){
            ans += (i+1) * getVal(s.charAt(i)) ;
        }
        return ans ;
    }
}