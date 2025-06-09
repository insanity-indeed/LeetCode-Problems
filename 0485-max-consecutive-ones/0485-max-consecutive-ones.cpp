class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cntMax = 0, cnt = 0; ; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1){
                cnt++;
            }
            if(nums[i] == 0 || i == nums.size() - 1){
                if(cnt > cntMax){
                    cntMax = cnt;
                }
                    cnt = 0;
            }
        }
        return cntMax;
    }
};