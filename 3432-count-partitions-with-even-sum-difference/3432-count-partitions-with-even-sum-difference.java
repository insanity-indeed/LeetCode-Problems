class Solution {
    public int countPartitions(int[] nums) {
        int n = nums.length ;
        int[] pre = new int[n] ;
        int[] post = new int[n] ;
        int sum = 0 ;

        for(int i = 0 ; i < n ; i++){
            pre[i] = sum + nums[i] ;
            sum = pre[i] ;
        }

        sum = 0 ;
        for(int i = n-1 ; i >= 0 ; i--){
            post[i] = sum + nums[i] ;
            sum = post[i] ;
        }

        int ans = 0 ;

        for(int i = 0 ; i < n - 1 ; i++){
            int diff = pre[i] - post[i+1] ;
            if(diff % 2 == 0)
                ans++ ;
        }

        return ans ;
    }
}