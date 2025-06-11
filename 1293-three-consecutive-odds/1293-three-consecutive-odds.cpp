class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& num) {
        if(num.size() <= 2)  return 0;
        for(int i = 0 ; i < num.size() - 2 ; i++){
            int s = i ;
            if(num[s] % 2 !=0 && num[s+1] % 2 !=0 && num[s+2] % 2 !=0){
                return 1;
            }
        }
        return 0;
    }
};