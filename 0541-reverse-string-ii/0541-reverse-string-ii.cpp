class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length() - 1 ;
        int i = 0 ;
        while(i <= n){
            int low = i ;
            int high = i + 2*k ;
            if(n - low < k){
                reverse(s.begin()+low,s.end());
                break ;
            }
            else{
                if(high <= n){
                    reverse(s.begin()+low,s.begin() + low + k );
                    i += 2*k ;
                }
                else{
                    reverse(s.begin()+low,s.begin() + low + k );
                    break;
                }
            }
        }
        return s ;
    }
};