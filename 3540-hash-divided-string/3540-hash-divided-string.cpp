class Solution {
public:
    string stringHash(string s, int k) {
        int sum = 0 ;
        int cnt = 0 ;
        string sb = "" ;
        for(int i = 0 ; i < s.length() ; i++){
            cnt++ ;
            sum += (s[i] - 'a') ; 
            if(cnt == k ){
                char ch = 'a' + (sum % 26) ;
                sb += ch  ;
                cnt = 0 ;
                sum = 0 ;
            }  
        }   
        return sb ;
    }
};