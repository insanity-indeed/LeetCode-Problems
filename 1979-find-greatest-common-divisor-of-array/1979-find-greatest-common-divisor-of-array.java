class Solution {
    public int findGCD(int[] nums) {
        Arrays.sort(nums) ;
        int s = nums[0] ;
        int l = nums[nums.length - 1] ;
        if(s == 0 || l == 0)  return 1 ;
       
        int lcd  = s;
        
        while(lcd >= 1){
            if(l % lcd == 0 && s % lcd == 0)
                break ;
            
            lcd-- ;
        }
        return lcd ;
    }
}