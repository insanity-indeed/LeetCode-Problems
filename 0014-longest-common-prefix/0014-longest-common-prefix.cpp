class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        /*string ans = "" ;
        for(int i = 0 ; i < strs[0].size() ; i++){
            char c = strs[0][i] ; 
            bool flag = 1 ;
            for(int j = 0 ; j < strs.size() ; j++){
                if(strs[j][i] != c)
                    flag = 0;
            }
            if(flag == 1)
                ans += c ;
            else 
                break ; 
        } 
        return ans ;  */
        string ans = "" ;
        int first = 0 ;
        int last = strs.size() - 1 ;
        sort(strs.begin() ,strs.end());
        for(int i = 0 ; i < strs[first].length() ; i++){
            if(strs[first][i] == strs[last][i])
                ans += strs[first][i] ;
            else
                break ;
        }
        return ans ;

    }
};