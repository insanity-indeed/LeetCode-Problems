class Solution {
    public boolean backspaceCompare(String s, String t) {
        Stack<Character> st = new Stack<>() ;
        Stack<Character> st2 = new Stack<>() ;
        for(int i = 0 ; i < s.length() ; i++){
            char ch = s.charAt(i) ;
            if(ch == '#'){
                if(st.isEmpty())    continue ;
                st.pop() ;
            }   
            else    st.push(ch) ;
        }

        for(int i = 0 ; i < t.length() ; i++){
            char ch = t.charAt(i) ;
            if(ch == '#'){
                if(st2.isEmpty())    continue ;
                st2.pop() ;
            }
            else    st2.push(ch) ;
        }

        if(st.size() != st2.size()) return false ;
        int n = st.size() ;
        for(int i = 0 ; i < n ; i++){
            if(st.pop() != st2.pop()) return false ;
            // st.pop() ;
            // st2.pop() ;
        }

        return true ;
    }
}