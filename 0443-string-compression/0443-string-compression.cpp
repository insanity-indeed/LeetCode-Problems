class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0 ; 
        for(int i = 0 ; i < chars.size() ; i++){
            char ch = chars[i];
            int cnt = 0 ;
            while(i < chars.size() && chars[i]== ch){
                cnt++ ;
                i++ ;
            }
            if(cnt == 1)    chars[index++] = ch ;
            else{
                chars[index++] = ch ;
                string str = to_string(cnt);
                for(char c : str)
                    chars[index++] = c ;
            }
            i--;
        }
        chars.resize(index);
        return chars.size() ;
    }
};