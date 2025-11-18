class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int ind = 0 ;
        int n = nums.length ;

        while(ind < n){
            int real = nums[ind] - 1 ;
            if(nums[ind] != nums[real]){
                int temp = nums[ind] ;
                nums[ind] = nums[real] ;
                nums[real] = temp ;
            }
            else
                ind++ ;
        }

        List<Integer> ans = new ArrayList<>() ;

        for(int i = 0 ; i < n ; i++){
            if(nums[i] - 1 != i)    ans.add(i+1) ;
        }

        return ans ;
    }
}