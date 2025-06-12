class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closestSum = nums[0]+nums[1]+nums[2];
        for(int i = 0 ; i < nums.size() - 2 ; i++){
            if(i>1&&nums[i] == nums[i-1]) continue;
            int j = i + 1 , k = nums.size() - 1 ;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(abs(sum-target) < abs( closestSum-target ))
                    closestSum = sum;
                
                if (sum < target) {
                    j++;
                } else if (sum > target) {
                    k--;
                } else {
                    // Perfect match found
                    return target;
                }
            }
        }
        return closestSum;   
    }
};