class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "" ;
        for(int i = 0 ; i < num.length() ; i++ ){
            if(num[i] == num[i+1] && num[i+1] == num[i+2]){
                if(ans == "")
                    ans = string(3,num[i]);
                else{
                    int n1 = ans[0] - '0';
                    int n2 = num[i] - '0';
                    if(n2>n1)
                        ans = string(3,num[i]);
                }
            }
        }  
        return ans ;
    }
};