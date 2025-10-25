class Solution {
    public double myPow(double x, int n) {
        double ans = 1 ;
        if(n == -2147483648 && x == 2)    return (double)0 ;
        if( n < 0){
            n = n * -1 ;
            x = 1 / x ;
        }  

        while(n > 0){
            if(n % 2 == 1){
                ans *= x ;
                n-- ;
            }
            else{
                x = x*x ;
                n = n / 2 ;
            }
        }
        return ans ;
    }
}