class Solution {
    public int minDays(int[] bloomDay, int m, int k) {
        int low = 1 ;
        int high = 0 ;
        int ans = -1 ;
        int total = m * k ;
        if(bloomDay.length < total) return -1 ;
        for(int day : bloomDay){
            high = Math.max(high,day);
        }
        if(bloomDay.length == total) return high ;

    while(low <= high){
        int mid = low + (high - low)/2 ;
        int sum = 0 ;
        int cnt = 0 ;
        for(int i = 0 ; i < bloomDay.length ; i++){
            if(bloomDay[i] <= mid)
                cnt++ ;
            else{
                sum += cnt / k ;
                cnt = 0 ;
            }
        }
        sum += cnt / k ;
        if(sum >= m ){
            ans = mid ;
            high = mid - 1;
        }
        else
            low = mid + 1 ;
    }
    return ans ;
    }
}