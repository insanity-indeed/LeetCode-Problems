class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sumS = 0 , sumD = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]<10)  sumS += nums[i] ;
            else    sumD += nums[i] ;
        }
        if(sumS == sumD)
            return 0 ;
        else
            return 1 ;        
    }
};