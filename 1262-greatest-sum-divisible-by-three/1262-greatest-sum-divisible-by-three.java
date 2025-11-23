class Solution {
    public int maxSumDivThree(int[] nums) {
        
        int sum = 0 ;
        int rem1 = 999999999;
        int rem2 = 999999999;
        for(int i : nums){
            sum += i ;
            if(i%3 == 1){
                rem2 = Math.min(rem2,rem1+i);
                rem1 = Math.min(rem1,i) ;
            }
            if(i%3 == 2){
                rem1 = Math.min(rem1,rem2+i);
                rem2 = Math.min(rem2,i) ;
            }
        }
        
        if(sum % 3 == 0)   return sum ;
        else if(sum % 3 == 1)   return sum - rem1 ;
        else return sum - rem2 ;
        
         
        
    }
}