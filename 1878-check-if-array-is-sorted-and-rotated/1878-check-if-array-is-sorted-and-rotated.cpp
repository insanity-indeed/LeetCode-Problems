class Solution {
public:
    bool check(vector<int>& nums) {
        int pnt = 0 ;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i-1] > nums[i])
                pnt++;
        } 
        if(nums[0] >= nums[nums.size()-1] && pnt == 1)
            return 1 ;
        if(pnt == 0)
            return 1 ;
         else
            return 0 ; 
    }
};