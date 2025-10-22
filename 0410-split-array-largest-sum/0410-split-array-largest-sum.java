class Solution {
    public boolean isPossible(int[] nums, int k, int mid){
        int sum = 0 ;
        int check = 1;
        for(int num : nums){
            if(num > mid)   return false ;
            if(sum + num > mid){
                check++ ;
                sum = num ;
                if(check > k)   return false;
            }
            else
                sum += num ;
        }
        return true ;
    }
    public int splitArray(int[] nums, int k) {
        int low = 0 ;
        int high = 0 ;
        int ans = -1 ;
        for(int num : nums){
            high += num ;
        }   

        while(low <= high){
            int mid = low + (high - low)/2 ;
            if(isPossible(nums,k,mid)){
                ans = mid ;
                high = mid - 1;
            }
            else
                low = mid + 1 ;

        }
        return ans ;
    }
}