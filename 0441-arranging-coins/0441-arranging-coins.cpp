class Solution {
public:
    int arrangeCoins(int n) {
        // int low = 1 ; 
        // int high = n ;
        // while(low <= high){
        //     int mid = low + (high - low)/2 ;
        //     int nos = mid * (mid - 1) / 2 ;
        //     if(nos > n)
        //         high = mid - 1 ;
        //     else
        //         low = mid + 1 ;  
        // }
        // return high -1;
        int sum , ans;
        for(long i=2;;i++){
            long sum = (i*(i+1))/2;
            if(sum > n) return i-1;
            if(sum == n) return i;
        }
        return -1;
    }
};