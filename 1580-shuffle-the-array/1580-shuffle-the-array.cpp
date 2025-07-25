class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i = 0 ; 
        vector<int> ans ;
        while(i < n){
            int j = i + n ;
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
        }
        return ans;
    }
};