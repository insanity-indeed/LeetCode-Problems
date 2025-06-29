class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 0 ;
        int high = num ;
        int ans = -1 ;

        while( low <= high ){
            long long mid = low + (high - low)/2 ;
            long long sq = mid * mid ;

            if(num == sq)
                return 1;

            if(sq > num)
                high = mid - 1 ;
            else{
                low = mid + 1 ;
            }
        } 

        return 0 ;

    }
};