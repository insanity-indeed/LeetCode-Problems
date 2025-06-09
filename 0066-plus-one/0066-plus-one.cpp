class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;   // Simple case
            return digits;
        }
        digits[i] = 0;     // Carry-over case
    }

    // If loop completes, all were 9 → need to add 1 at front
    digits.insert(digits.begin(), 1);
    return digits;
    }
};