class Solution {
    public int divide(int dividend, int divisor) {
        //public int divide(int dividend, int divisor) {
        
        // Base case
        if (dividend == divisor) return 1;
        if (dividend == Integer.MIN_VALUE && divisor == -1) return Integer.MAX_VALUE;
        if (divisor == 1) return dividend;
        
        // Variable to store the sign of result
        boolean isPositive = true;
        
        // Updating the sign of quotient
        if (dividend >= 0 && divisor < 0) 
            isPositive = false;
        else if (dividend < 0 && divisor > 0)
            isPositive = false;
            
        // Storing absolute dividend & divisor
        long n = dividend;
        long d = divisor;

        n = Math.abs(n);
        d = Math.abs(d);
        
        // Variable to store the answer and sum
        long ans = 0, sum = 0;
        
        /* Looping while sum added to divisor is
        less than or equal to dividend */
        while (sum + d <= n) {
            
            // Increment the count
            ans++;
            // Update the sum
            sum += d;
        }
        
        // Handling overflowing condition
        if (ans > Integer.MAX_VALUE && isPositive) 
            return Integer.MAX_VALUE;
        if (ans > Integer.MAX_VALUE && !isPositive)
            return Integer.MIN_VALUE;
        
        /* Returning the quotient 
        with proper sign */
        return isPositive ? (int)ans : (int)(-1 * ans);
    }
}