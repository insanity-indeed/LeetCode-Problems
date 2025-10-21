class Solution {
    public int missingNumber(int[] nums) {
        int xor1 = 0 ;
        int xor2 = 0 ;
        for(int i = 0 ; i < nums.length ; i++){
            xor1 ^= nums[i] ;
            xor2 ^= i;
        }
        xor2 ^= nums.length ;
        return xor1^xor2 ;
    } 
}