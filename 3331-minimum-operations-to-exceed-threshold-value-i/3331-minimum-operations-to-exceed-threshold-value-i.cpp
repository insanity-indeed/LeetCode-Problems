class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());   
        int low = 0 , high = nums.size() - 1 , index = -1;
        while(low<=high){
            int mid = low + (high-low) / 2 ;
            if(nums[mid] >= k){
                index = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;

        }
        return index;
    }
};