class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    set<vector<int>> str;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    
    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; 
        
        int m = i + 1, e = n - 1;
        while (m < e) {
            int sum = nums[i] + nums[m] + nums[e];
            
            if (sum == 0) {
                vector<int> v = {nums[i], nums[m], nums[e]};
                str.insert(v);
                m++;
                e--;
                while (m < e && nums[m] == nums[m - 1]) m++;
                while (m < e && nums[e] == nums[e + 1]) e--;
            }
            else if (sum < 0) {
                m++;
            }
            else {
                e--;
            }
        }
    }
    
    vector<vector<int>> v(str.begin(), str.end());
    return v;

    }
};