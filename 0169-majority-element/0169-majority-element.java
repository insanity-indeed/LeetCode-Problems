class Solution {
    public int majorityElement(int[] nums) {
        int maxEl = nums[0] ;
        int cnt = 1 ;
        for(int i = 1 ; i < nums.length ; i++){
            if(maxEl == nums[i])
                cnt++ ;
            else
                cnt-- ;

            if(cnt == 0){
                maxEl = nums[i] ;
                cnt = 1;

            }
        }
        cnt = 0 ;
        for(int i = 0 ; i < nums.length ; i++){
            if(maxEl == nums[i])
                cnt++;
        }
        if(cnt >= nums.length/2)
            return maxEl ;
        return -1 ;
    }
}