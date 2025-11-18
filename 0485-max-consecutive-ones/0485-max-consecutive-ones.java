class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int sum = 0 ;
        int maxSum = 0 ;
        for(int i = 0 ; i < nums.length ; i++){
            if(nums[i] == 1){
                sum++ ;
                maxSum = Math.max(maxSum,sum);
            }
            else{
                sum = 0 ;
            }
        }
        //maxSum = Math.max(maxSum,sum);
        return maxSum ;
    }
}