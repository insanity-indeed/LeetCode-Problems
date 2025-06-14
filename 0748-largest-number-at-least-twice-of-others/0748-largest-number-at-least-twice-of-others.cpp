class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = -1 , maxIndex,secondMax = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
                maxIndex = i;
            }
    }
    for (int i = 0; i < nums.size(); i++) {
        if (i != maxIndex) {
            secondMax = max(secondMax, nums[i]);
        }
    }

        if(maxi/2 >= secondMax)
            return maxIndex;
        else
            return -1 ;

    }
};