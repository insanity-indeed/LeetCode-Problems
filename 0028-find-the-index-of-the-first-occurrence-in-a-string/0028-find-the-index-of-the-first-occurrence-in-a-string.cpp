class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = -1 ;
        index = haystack.find(needle);
        if(index != haystack.length())
            return index ;
        else 
            return -1;
    }
};