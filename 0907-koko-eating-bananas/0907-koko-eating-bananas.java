class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int low = 1 ;
        int high =  0 ;
        for(int pile : piles){
            high = Math.max(high,pile);
        }
            int ans = -1 ;

        while(low <= high){
            int mid = low + (high - low)/2 ;
            long sum  = 0 ;
            for(int i = 0 ; i < piles.length ; i++){
                sum += (piles[i] + mid - 1 )/mid ;
            }

            if(sum <= h){
                ans = mid ;
                high = mid - 1 ;
            }
            else{
                low = mid + 1 ;
            }
        }
        return ans ;
    }
}