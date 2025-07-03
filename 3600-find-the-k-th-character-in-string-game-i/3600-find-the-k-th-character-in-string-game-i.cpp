class Solution {
public:
    char kthCharacter(int k) {
        string ans = "a";
        while(ans.length() < k){
            int len = ans.length() ;
            for(int j = 0 ; j < len ; j++){
                if(ans[j] == 'z')
                    ans += 'a' ;
                else{
                    ans += (ans[j]+1);
                }
            }
        }
        return ans[k-1];    
    }
};