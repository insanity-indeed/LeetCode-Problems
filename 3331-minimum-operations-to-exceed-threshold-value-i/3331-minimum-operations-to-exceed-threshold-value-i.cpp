class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());   
        int i = 0 , cnt = 0 ;
        while(nums[i] < k){
            cnt++;
            i++;
        }
        return cnt;
    }
};