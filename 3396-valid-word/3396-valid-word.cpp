class Solution {
public:
    bool isValid(string word) {
        if(word.length()<3) return 0;
        int cntNum = 1 , cntVow = 0 , cntCon = 0;
        for(int i = 0 ; i < word.length() ; i++){
            char c = word[i];
            if (isdigit(c)) {
                continue;
            } else if (isalpha(c)) {
                char lower = tolower(c);
                if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                    cntVow = true;
                } else {
                    cntCon = true;
                }
            } else {
                cntNum = 0;
            }
        }
        return cntNum && cntVow && cntCon ;
    }
};