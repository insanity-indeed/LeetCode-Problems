class Solution {
public:
    bool ispalindrome(string s ){
        int left = 0 ; 
        int right = s.length() - 1  ;
        while(left <= right){
            if(s[left++] != s[right--])
                return 0 ;
        }
        return 1 ;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i = 0 ; i < words.size() ; i++ ){
            if(ispalindrome(words[i]))
                return words[i];
        }
        return "";
    }
};