class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> v(nums.size(),0);

        int totalSum = 0;
        for(auto i : nums){
            totalSum  += i;
        }

        int left = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            int right = totalSum - left - nums[i];
            v[i] = abs(right - left);
            left += nums[i];
        } 
        return v;
    }
};