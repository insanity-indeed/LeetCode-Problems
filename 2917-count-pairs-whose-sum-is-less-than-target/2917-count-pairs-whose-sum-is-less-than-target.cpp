class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        /*sort(nums.begin(),nums.end());
        int ans = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i + 1 ; j < nums.size() ; j++ ){
                int sum = nums[i] + nums[j];
                if(sum < target)
                    ans++;
            }
        }
        return ans;
        */
        sort(nums.begin() , nums.end()); 
        int count = 0; 
        int left = 0; 
        int right = nums.size()-1; 
        while(left < right){
            if(nums[left] + nums[right] < target){ 
                count += right-left; 
                left++; 
            }
            else{ 
                right--; 
          }
      }
      return count;
    }
};