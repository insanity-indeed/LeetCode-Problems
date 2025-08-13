class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false; // only positive numbers
        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;    
    }
};