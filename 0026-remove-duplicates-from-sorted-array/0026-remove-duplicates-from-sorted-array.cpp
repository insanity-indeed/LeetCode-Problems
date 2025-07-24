class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int current = -1 , visited = -1 ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(current == -1 || nums[i] != nums[current]){
                current++;
                nums[current] = nums[i] ;
            }   
        }
        return current + 1 ;    
    }
};