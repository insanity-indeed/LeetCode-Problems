class Solution {
    public int singleNonDuplicate(int[] nums) {
        int low = 0 ;
        int high = nums.length - 1 ;
        if(low == high )    return nums[0] ;
        if(nums[low] != nums[low + 1])  return nums[low] ;
        if(nums[high] != nums[high - 1])return nums[high] ;   

        while(low <= high){
            int mid = low + (high - low) / 2 ;
            if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid+1])  
                return nums[mid] ;
            if(mid%2 != 0 && nums[mid] != nums[mid-1] || mid%2 == 0 && nums[mid] != nums[mid+1])
                high = mid - 1 ;
            else
                low = mid + 1 ;
        }
        return nums[low] ;
    }
}