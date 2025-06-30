class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxNum = *max_element(nums.begin(), nums.end());
        int low = 1 ;
        int high = maxNum ;
        int ans =  0;

        while(low<=high){
            int mid = low + (high - low)/2 ;
            int checkSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % mid == 0) {
                checkSum += nums[i] / mid;
            } else {
                checkSum += nums[i] / mid + 1;
            }
        }

        if (checkSum <= threshold) {
            ans = mid;         // possible answer
            high = mid - 1;    // try to find smaller divisor
        } else {
            low = mid + 1;     // need larger divisor to reduce sum
        } 
        
        }

        return ans;
    }
};