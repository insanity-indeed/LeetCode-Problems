class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       int s1 = 0, s2 = 0;
        string result = "";

        while (s1 < word1.length() && s2 < word2.length()) {
            result += word1[s1++];
            result += word2[s2++];
        }

        while (s1 < word1.length()) {
            result += word1[s1++];
        }

        while (s2 < word2.length()) {
            result += word2[s2++];
        }

        return result;
    }
};