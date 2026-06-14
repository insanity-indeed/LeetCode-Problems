class Solution {
    public boolean check(int[] nums) {
        int br = 0 ;
        for(int i = 1 ; i < nums.length ; i++){
            if(nums[i] < nums[i-1])     br++ ;
            if(br > 1)               return false ;
        }
        if(br == 0) return true ;

        if(nums[0] >= nums[nums.length - 1])    br++ ;

        if(br == 2)  return true ;
        
        return false ;
    }
}