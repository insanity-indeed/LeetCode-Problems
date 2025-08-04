class Solution {
public:
    char findTheDifference(string s, string t){
        // for(int i = 0 ; i < t.length() ; i++){
        //     if(s.find(t[i])>t.length())
        //         return t[i] ;
        // }
        // return 'a' ;   
        long long sum = 0;
        for(int i = 0 ; i < t.length() ; i++ ){
            sum += tolower(t[i]) - 'a' ;
        }
        for(int i = 0 ; i < s.length() ; i++ ){
            sum -= tolower(s[i]) - 'a' ;
        }
        return 'a' + sum ; 
    }
};