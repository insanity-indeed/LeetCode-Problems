class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans ;
        if(chars.size() == 1)   return 1 ;
        for(int i = 0 ; i < chars.size() ; ){
            char temp = chars[i];
            int cnt = 0 ;
            while(i < chars.size() && temp == chars[i] ){
                cnt++;
                i++;
            }
            ans.push_back(temp);
            if(cnt > 1){
                string countStr = to_string(cnt);
                for (char c : countStr) {
                    ans.push_back(c);
                }
            }
           
        }
         chars = ans;
        return chars.size() ;
    }
};