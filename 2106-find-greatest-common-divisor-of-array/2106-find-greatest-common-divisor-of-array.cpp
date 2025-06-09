class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int smaller = nums[0], larger = nums[nums.size()-1];

        while(smaller != 0 ){
            int rem = larger % smaller ;
            larger = smaller ;
            smaller = rem;
        }
        return larger;
    }
};