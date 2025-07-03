class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*int j = 0 ;
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(j<2 || nums[i] != nums[j-2]){
                nums[j] = nums[i];
                j++; 
            }
        }
        return j ;
        */
        vector<int> v;
        int cnt = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (v.empty() || v.back() != nums[i]) {
                v.push_back(nums[i]);
                cnt = 1;
            } else if (cnt < 2) {
                v.push_back(nums[i]);
                cnt++;
            }
            // else: skip this value
        }

        nums = v;
        return v.size();
    }
};