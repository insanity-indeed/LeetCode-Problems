
class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxi = -1 ;
        for(int i = 1 ; i < nums.size() ; i++){
            int dif = abs(nums[i]-nums[i-1]);
            maxi = max(maxi,dif);
        }
        int diff = abs(nums[0]-nums[nums.size()-1]);
        maxi = max(maxi,diff);
        return maxi;
    }
};