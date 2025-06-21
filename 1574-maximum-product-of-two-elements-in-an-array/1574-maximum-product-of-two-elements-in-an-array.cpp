class Solution {
public:
    int maxProduct(vector<int>& nums) {
        /*
        Using sorting
        sort(nums.begin(),nums.end());
        return (nums[nums.size()-2]-1)*(nums[nums.size()-1]-1);
        */

        int ans = 1;
        int max1 = -1, max2 = -1;
        for(int i = 0 ; i < nums.size() ; i++){
             if (nums[i] > max1) {
                max2 = max1;
                max1 = nums[i];
            } else if (nums[i] > max2) {
                max2 = nums[i];
            }
        }

        return (max1-1)*(max2-1);
    }
};