class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int[] freq = new int[nums.length] ; // initalizes to 0
        List<Integer> ans = new ArrayList<>() ;
        for(int i = 0 ; i < nums.length ; i++){
            freq[nums[i] - 1 ]++ ;
        }
        for(int i = 0 ; i < freq.length ; i++){
            if(freq[i] == 0)
                ans.add(i+1);
        }
        return ans ;
    }
}