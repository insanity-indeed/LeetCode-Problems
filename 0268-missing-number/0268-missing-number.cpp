class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() , i = 0;
        sort(nums.begin(),nums.end());
        for( ; i < n  ; i++){
            if(nums[i] != i)
                return i; 
        }
        return i;
    }
};