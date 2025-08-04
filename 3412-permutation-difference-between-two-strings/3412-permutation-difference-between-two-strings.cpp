class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int sum = 0 ; 
        for(int i = 0 ; i < s.length() ; i++){
            int index = t.find(s[i]);
            sum += abs(index-i);
        }   
        return sum ;
    }
};