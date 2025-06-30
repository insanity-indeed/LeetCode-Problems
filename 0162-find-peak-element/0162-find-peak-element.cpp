class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak ;
        for(int i = 0 ; i < nums.size() ; i++){
            if((i==0 || nums[i]>nums[i-1])&&(i==nums.size() - 1 || nums[i]>nums[i+1])){
                peak = i;
                break;
            }
        }
        return peak ;    
    }
};