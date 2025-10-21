class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] ans = {0,0} ;
        HashMap<Integer,Integer> mpp = new HashMap<>() ;
        for(int i = 0 ; i < nums.length ; i++){
            if(mpp.containsKey(target - nums[i])){
                ans[1] = i ;
                ans[0] = mpp.get(target - nums[i]);
                return ans ;
            }
                mpp.put(nums[i], i);
        }
        return ans ;
    }
}