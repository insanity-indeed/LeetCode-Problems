class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size() < 1)    return 0;
        int last = nums[0] , longest = 1 , curr = 1;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] == last)
                continue;
            else if(nums[i] == last+1 ){
                curr++;
                longest = max(longest,curr);
                last = nums[i];
            }
            else{
                last = nums[i];
                curr = 1;
            }
        }
        return longest;  
    }
};