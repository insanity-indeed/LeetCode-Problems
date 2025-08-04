class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length())   return 0 ;
        int freq[26] = {0} ;
        for(int i = 0 ; i < s1.length() ; i++){
            freq[s1[i] - 'a']++;
        }
        for(int i = 0 ; i < s2.length() - s1.length() + 1; i++){
            int window[26] = {0};
            for(int j = i ; j < i + s1.length() ; j++){
                window[s2[j] -'a']++;
            }
            bool match = 1 ;
            for(int j = 0 ; j < 26 ; j++){
                if(freq[j] != window[j])
                    match =  0 ;
            }
            if(match)   return 1;
        }
        return 0 ;
    }
};