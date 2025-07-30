class Solution {
public:
    bool isVowel(char c){
        c = tolower(c);
        if(c == 'a' || c == 'u' || c == 'o' || c == 'i' || c == 'e' )
            return 1;
        return 0;
    }
    string reverseVowels(string s) {
        int left = 0 , right = s.length() -1 ;
        while(left <= right){
            if(isVowel(s[left]) && isVowel(s[right]))
                swap(s[left++],s[right--]);
            else if(isVowel(s[left])&& !isVowel(s[right]))
                right--;
            else
                left++;
        }
        return s ;
    }
};