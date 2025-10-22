class Solution {
    public int findMin(int[] nums) {
        int low = 0 ;
        int high = nums.length - 1 ;
        int ans = 50001 ;
        while(low <= high){
            int mid = low + (high - low)/2 ;
            if(ans > nums[mid])
                ans = nums[mid] ;
            
            if(nums[low] <= nums[mid]){
                if(nums[low] < ans)
                    ans = nums[low] ;
                low = mid + 1 ;
            }
            else
                high = mid - 1 ;
        }
        return ans ;
    }
}