class Solution {
public:
    int findMin(vector<int>& nums) {
        /*int mini = INT_MAX ;
        int low = 0 ;
        int high =  nums.size() - 1;
        while(low <= high){
            int mid = low + (high - low)/2 ;

            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++;
                high--;
            }
            if(nums[mid]<mini)
                mini = min(mini,nums[mid]) ;
            
            if(nums[low]<=nums[mid]){
                mini = min(nums[low],mini) ;
                low = mid + 1;
            }
            else
                high = mid - 1 ;
        }
        return mini;    */

        return *min_element(nums.begin(),nums.end());
    }
};