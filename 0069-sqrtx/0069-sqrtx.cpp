class Solution {
public:
    int mySqrt(int x) {
        int low = 0 ;
        int high = x ;
        long long ans = -1;

        while(low <= high){
            long long mid = low + (high - low) / 2 ;
            long long sq = mid * mid ;

            if(sq==x)
                return mid;
            
            if(sq > x){
                high = mid - 1 ; 
            }
            else{
                ans = mid ;
                low = mid + 1 ;
            }
        }
        return ans;
    }
};