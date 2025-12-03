class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums) ;
        List<List<Integer>> ans = new ArrayList<>() ;
        HashSet<List<Integer>> mpp = new HashSet<>() ;
        int n = nums.length ;

        for(int num = 0 ; num < (1<<n) ; num++){
            List<Integer> temp = new ArrayList<>() ;

            for(int i = 0 ; i < n ; i++){
                if((num & (1<<i)) != 0) 
                    temp.add(nums[i]) ;
            }

            mpp.add(temp) ;
        }
        ans.addAll(mpp) ;
        return ans ;
    }
}