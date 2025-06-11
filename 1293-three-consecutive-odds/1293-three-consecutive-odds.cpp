class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& num) {
        if(num.size() <= 2)  return 0;
        for(int i = 0 ; i < num.size() - 2 ; i++){
            if(num[i] % 2 !=0 && num[i+1] % 2 !=0 && num[i+2] % 2 !=0){
                return 1;
            }
        }
        return 0;
    }
};