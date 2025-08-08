class Solution {
public:
    bool rotateString(string s, string goal) {
        int flag = 0 ;
        if(s.length() != goal.length()) return 0 ;
        for(int i = 0 ; i < s.length() ; i++){
            reverse(s.begin(),s.end());
            reverse(s.begin(),s.end() - 1);
            if(s == goal)   return 1 ;
        }
        return 0 ;
    }
};