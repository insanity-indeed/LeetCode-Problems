class Solution {
    public boolean isValid(String s) {
        Stack<Character> st = new Stack<>() ;
        for(int i = 0 ; i < s.length() ; i++){
            char c = s.charAt(i) ;
            if(st.isEmpty()){
                if(c == ')' || c == '}' || c == ']')
                    return false ;
                else
                    st.push(c) ;
            }
            else if(st.peek() == '(' && c == ')' || st.peek() == '[' && c == ']' || st.peek() == '{' && c == '}')
                st.pop() ;
            else
                st.push(c) ;
        }
        if(!st.isEmpty())   return false ;
        return true ;
    }
}