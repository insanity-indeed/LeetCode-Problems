class Solution {
    public int findFinalValue(int[] nums, int original) {
        
        while(true){
            int prev = original ;
            for(int i = 0 ; i < nums.length ; i++){
                if(nums[i] == original)
                    original *= 2 ;
            }
            if(prev == original)    break ;
        }
        return original ;
    }
}