class Solution {
public:
    int binarySearch(vector<int>& nums, int target , int i , int j){
         if(i > j)
            return -1;

        int mid = (i + j) / 2;

        if(nums[mid] == target)
            return mid;
        else if(nums[mid] < target)
            return binarySearch(nums, target, mid + 1, j);
        else
            return binarySearch(nums, target, i, mid - 1);

    }
    int search(vector<int>& nums, int target) {
        int high = nums.size() - 1;
        int low = 0;   
        int ans = binarySearch(nums,target,low,high);
        return ans ;
    }
};