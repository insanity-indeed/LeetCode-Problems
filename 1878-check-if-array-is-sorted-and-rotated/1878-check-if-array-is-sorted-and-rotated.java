class Solution {
    public boolean check(int[] nums) {
        int breakPoint = 0 ;
        for(int i = 1 ; i < nums.length ; i++){
            if(nums[i-1] > nums[i] )
                breakPoint++ ;
        }
        if(nums[0] < nums[nums.length-1]) breakPoint++;
        if(breakPoint > 1)
            return false ;
        return true;
    }
}