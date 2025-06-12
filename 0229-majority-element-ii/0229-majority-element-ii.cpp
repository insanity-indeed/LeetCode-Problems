class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
    
        // BRUTE FORCE APPROACH
        // Time Complexity: O(nlogn)
        // Space Complexity: O(n)
        vector<int> res;
        map<int,int> mpp;
        int minOcc = n / 3 + 1 ;
        for(int i = 0 ; i < n ; i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] == minOcc)
                res.push_back(nums[i]);
        }
        return res;
    
    }
};