class Solution {
    public int longestOnes(int[] nums, int k) {
        int right = 0 ;
        int left = 0 ;
        int maxLen = 0 ;
        int zeroes = 0 ;
        int len = 0 ;
        for(int i = 0 ; i < nums.length ; ++i ){
            if(nums[i] == 0){
                zeroes++ ;
            }
            if(zeroes > k){
                if( nums[left] == 0)
                    zeroes-- ;
                left++ ;
            } 
            if(zeroes <= k)
                maxLen = Math.max(maxLen , i - left + 1);
        }   
        return maxLen ;
    }
}