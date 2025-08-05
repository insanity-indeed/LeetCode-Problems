class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        sort(jewels.begin(),jewels.end());
        sort(stones.begin(),stones.end());
        int cnt = 0 ;
        for(int i = 0 ; i < jewels.length() ; i++){
            for(int j = 0 ; j < stones.length() ; j++){
                if(jewels[i] == stones[j])
                    cnt++;
                if(jewels[i] -'A' < stones[j] -'A')
                    break;
            }
        }
        return cnt ;
    }
};