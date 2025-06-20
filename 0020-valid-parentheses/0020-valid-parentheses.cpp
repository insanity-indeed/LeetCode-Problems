class Solution {
public:
    bool isValid(string s) {
        stack<int> st;

        for(int i  = 0 ; i < s.length() ; i++){
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            } 
            else {
                if(st.empty()) return 0;
                if(s[i] == ')' && st.top() != '(' || 
                    s[i] == ']' && st.top() != '[' ||
                    s[i] == '}' && st.top() != '{'){
                        return 0;
                    }
                st.pop();
            }
        }  

        return st.empty();

    }
};