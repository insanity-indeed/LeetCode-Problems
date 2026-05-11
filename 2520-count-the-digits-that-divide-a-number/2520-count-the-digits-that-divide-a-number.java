class Solution {
    public int countDigits(int num) {
        int ans = 0 ;
        int nums = num ;
        while(nums > 0){
            int digit = nums % 10 ;
            if(num % digit == 0)    ans++ ;
            nums /= 10 ;
        }   
        return ans ;
    }
}