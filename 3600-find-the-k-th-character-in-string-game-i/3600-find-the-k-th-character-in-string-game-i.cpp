class Solution {
public:
    char kthCharacter(int k) {
        string ans = "a";
        while(ans.length() < k){
            string temp = "";
            for(int j = 0 ; j < ans.length() ; j++){
                if(ans[j] == 'z')
                    temp += 'a' ;
                else{
                    char a = ans[j] + 1;
                    temp += a;
                }
            }
                ans += temp ;
        }
        return ans[k-1];    
    }
};