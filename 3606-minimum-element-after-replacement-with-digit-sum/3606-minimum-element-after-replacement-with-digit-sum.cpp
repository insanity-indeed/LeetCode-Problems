class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = INT_MAX ;
        for(int i = 0 ; i < nums.size() ; i++){
            int num = 0 ;
            while(nums[i] > 0){
                num += nums[i] % 10 ;
                nums[i] /= 10;
            }
            mini = min(num,mini);
        }
        return mini ;
    }
};