class Solution {
public:
    char findTheDifference(string s, string t){
        /*long long sum = 0;
        for(int i = 0 ; i < t.length() ; i++ ){
            sum += tolower(t[i]) - 'a' ;
        }
        for(int i = 0 ; i < s.length() ; i++ ){
            sum -= tolower(s[i]) - 'a' ;
        }
        return 'a' + sum ; 
        */
        int freq[26] = {0} ;
        for(int i = 0 ; i < t.length() ; i++)   freq[t[i]-'a']++;
        for(int i = 0 ; i < s.length() ; i++)   freq[s[i]-'a']--;
        for(int i = 0 ; i < 26 ; i++){
            if(freq[i]>0)
                return 'a' + i ;
        }
        return 'a' ;
    }
};