class Solution {
public:
    int maxDifference(string s) {
       vector<int> arr(26);
        int maxi = 0, mini = s.size();
        for (char c : s) arr[c - 'a']++;
        for (int i = 0 ; i < 26; i++) {
            if (arr[i] % 2 != 0) maxi = max(maxi, arr[i]);
            if (arr[i] % 2 == 0 && arr[i] > 0) mini = min(mini, arr[i]);
        } 
        return maxi - mini;
    
    }
};