class Solution {
    private int value(char c){
        switch(c){
            case 'I' : return 1 ;
            case 'V' : return 5 ;
            case 'X' : return 10 ;
            case 'L' : return 50 ;
            case 'C' : return 100 ;
            case 'D' : return 500 ;
            case 'M' : return 1000 ;
            default : return 0 ;
        }
    }
    public int romanToInt(String s) {
        HashMap<Character , Integer> roman = new HashMap<>() ;
        int ans = 0 ;
        for(int i = 0 ; i < s.length() - 1 ; i++){
            if(value(s.charAt(i)) < value(s.charAt(i+1)))
                ans -= value(s.charAt(i)) ;
            else
                ans += value(s.charAt(i)) ;
        }
        ans += value(s.charAt(s.length() - 1));
        return ans ;

    }
}