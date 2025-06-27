class Solution {
public:
    int findMin(vector<int>& nums) {
        /*int mini = INT_MAX ;
        for(int i = 0 ; i < nums.size() ; i++){
            mini = min(mini,nums[i]);
        }
        return mini ;*/

        int mini = INT_MAX ;
        int low = 0 ; 
        int high = nums.size() - 1;
        while(low <= high){
            int mid = low + (high-low)/2 ;
            if(nums[mid]<mini)  mini = min(nums[mid],mini);

            //left half is sorted
            if(nums[low]<=nums[mid]){
    
                    mini = min(nums[low],mini);
                    low = mid + 1 ;
            }
                
                else{
                    high = mid - 1 ;
                    mini = min(nums[mid],mini);
                }
            
            
        } 
        return mini; 
    }
};