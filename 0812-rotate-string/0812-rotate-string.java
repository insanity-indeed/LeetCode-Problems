class Solution {
    public boolean rotateString(String s, String goal) {
        if(s.equals(goal))   return true ;
        if(s.length() != goal.length()) return false ;

        for(int i = 0 ; i < goal.length() ; i++){
            goal = goal.substring(1) + goal.charAt(0);
            if(goal.equals(s)) return true ;
        }

        return false ;
    }
}