class Solution {
    public int countPrimes(int n) {
        boolean[] primes = new boolean[n] ;
        for(int i = 2 ; i < n ; i++) primes[i] = true ;
        int ans = 0 ;
        for(long i = 2 ; (long)i*i <= n ; i++){
            if(primes[(int)i]) {

            for(long j = (long)i*i ; j < n ; j+=i){
                primes[(int)j] = false ;
            }
            }
        }
        for(boolean i : primes)
            if(i == true)ans++ ;
        return ans ;
    }
}