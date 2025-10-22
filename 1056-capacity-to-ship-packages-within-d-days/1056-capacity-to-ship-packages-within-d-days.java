class Solution {
    public int shipWithinDays(int[] weights, int days) {
        int low = 0 ;
        for(int w : weights){
            low = Math.max(low,w);
        }
        int high = 0 ;
        for(int weight : weights){
            high += weight ;
        }
        int ans = -1 ;
        while(low <= high){
            int mid = low + (high - low) / 2 ;
            int checkDays = 1 ;
            int sum = 0 ;
            for (int w : weights) {
                if (sum + w > mid) { // capacity exceeded
                checkDays++; // start new day
                sum = w;
                }
                else
                sum += w;
            }
        
            if(checkDays <= days){
                high = mid - 1 ;
            }
            else
                low = mid + 1 ;
        }
        return low ;
    }
}