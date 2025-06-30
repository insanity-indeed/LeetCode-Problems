class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        /*int peak ;
        for(int i = 0 ; i < nums.size() ; i++){
            if((i==0 || nums[i]>nums[i-1])&&(i==nums.size() - 1 || nums[i]>nums[i+1])){
                peak = i;
                break;
            }
        }
        return peak ;    
        */

        int low = 0 ;
        int high = nums.size() - 1 ;
        while( low < high ){
            int mid = low + (high - low)/2 ;\
            if(nums[mid]<nums[mid+1]){
                low = mid + 1 ;
            }
            else{
                high = mid ;
            }
        } 
        return low;
    }
};