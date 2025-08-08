class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return 0 ;
        string temp = "" ;
        temp += s ;
        temp += s ;
        if(temp.find(goal) == string::npos)
            return 0 ;
        else
            return 1 ;

    }
};