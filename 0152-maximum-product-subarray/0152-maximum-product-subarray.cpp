class Solution {
public:
    int maxProduct(vector<int>& nums) {
       double ans = 0;
       if(nums.size()<2)    return nums[0];
       for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0)    continue;
            double temp = 1   ;
            temp *= nums[i];
            ans = max(temp,ans);
            for(int j = i + 1 ; j < nums.size() ; j++){
                temp *= nums[j];
                ans = max(temp,ans);
            }
       } 
       return (int)ans;
    }
};