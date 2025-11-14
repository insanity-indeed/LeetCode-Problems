class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int row = items.size() ;
        int cnt = 0 ;
        int ind = 0 ;
        if(ruleKey == "type")   ind = 0 ;
        else if(ruleKey == "color") ind = 1 ;
        else ind = 2 ;
        for(int i = 0 ; i < row ; i++){
            if(items[i][ind] == ruleValue)  cnt++ ;
        }
        return cnt ;
    }
};