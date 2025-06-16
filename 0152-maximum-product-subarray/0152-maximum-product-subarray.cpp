class Solution {
public:
    int maxProduct(vector<int>& nums) {
       double prefix = 1, suffix = 1 ,ans = INT_MIN;

       for(int i = 0 ; i < nums.size() ; i++ ){
            if(prefix == 0) prefix = 1;
            if(suffix == 0) suffix = 1;
            
            prefix *= nums[i];
            suffix *= nums[nums.size()-i-1];
            
            ans = max(prefix,ans);
            ans = max(suffix,ans);
             
       }
       return (int)ans;
    }
};