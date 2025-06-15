class Solution {
private:
    int findMin(vector<int>& nums){
        int mini  = INT_MAX,index = -1;
        for(int i = 0 ; i < nums.size() ; i++){
            mini = min(mini,nums[i]);
    
        }
        return mini ;
    }
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i = 0 ; i < k ; i++){
            int m = findMin(nums);
            auto it = find(nums.begin(), nums.end(), m);
            if (it != nums.end()) { // always good to check
                *it = (*it) * multiplier;
            }
        }
        return nums;    
    }
};