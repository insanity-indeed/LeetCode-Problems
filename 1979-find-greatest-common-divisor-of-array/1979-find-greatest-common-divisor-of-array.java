class Solution {
    public int findGCD(int[] nums) {
        Arrays.sort(nums) ;
        int s = nums[0] ;
        int l = nums[nums.length - 1] ;
        
        
        while(l % s != 0){
            int rem = l % s ;
            l = s ;
            s = rem ;
        }
        return s ;
    }
}