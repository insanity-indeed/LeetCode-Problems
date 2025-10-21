class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length ;
        int sumN = (n*(n+1)) / 2 ;
        for(int i = 0 ; i < n ; i++)
            sumN -= nums[i] ;
        return sumN ;
    } 
}