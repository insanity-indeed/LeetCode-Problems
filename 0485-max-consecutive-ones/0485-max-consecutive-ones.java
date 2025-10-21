class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int sum = 0 ;
        int maxSum = 0 ;
        for(int i = 0 ; i < nums.length ; i++){
            if(nums[i] == 0){
                maxSum = Math.max(maxSum,sum);
                sum = 0 ;
            }
            else{
                sum++ ;
            }
        }
        maxSum = Math.max(maxSum,sum);
        return maxSum ;
    }
}