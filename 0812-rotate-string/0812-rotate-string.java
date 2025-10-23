class Solution {
    public boolean rotateString(String s, String goal) {
        if(s.length() != goal.length()) return false ;
        String temp = "" ;
        temp += s ;
        temp += s ;
        if(temp.contains(goal))
            return true ;
        else 
            return false ;
    }
}