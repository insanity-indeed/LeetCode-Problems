class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        for(int i = 0 ; i < nums.size() ; i++){
            while(nums[i] > 0){
                int digit = nums[i] % 10 ;
                sum = sum - digit ;
                nums[i] /= 10 ;
            }
        }   
        return sum ;
    }
};