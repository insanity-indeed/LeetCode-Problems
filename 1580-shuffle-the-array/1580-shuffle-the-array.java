class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] ans = new int[2*n] ;
        int ind = 0 ;
        for(int i = 0 ; i < 2*n ; i += 2){
            ans[i] = nums[ind] ;
            ans[i+1] = nums[ind + n] ;
            ind++ ;
        }
        return ans ;
    }
}