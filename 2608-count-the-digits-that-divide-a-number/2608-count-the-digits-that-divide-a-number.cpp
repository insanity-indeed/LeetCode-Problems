class Solution {
public:
    int countDigits(int num) {
        int ans = 0 ;
        int temp = num ;
        while(temp > 0){
            int digit = temp % 10 ;
            if(num%digit == 0)  ans++;
            temp /= 10 ;
        }
        return ans;
    }
};