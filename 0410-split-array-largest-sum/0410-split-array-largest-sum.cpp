class Solution {
public:
    int fun(vector<int>& nums, int mid){
        int last = 0 , pos = 1 ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(last + nums[i] <=mid)
                last += nums[i];
            else{
                last = nums[i];
                pos++;
            }
        }
        return pos;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);

        while(low <= high){
            int mid = low +  (high-low)/2 ;
            int num = fun(nums,mid);
            if(num<=k)
                high = mid - 1 ;
            else
                low = mid + 1 ;
        }

        return low;    
    }
};