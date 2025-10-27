class Solution {
    public int subarraySum(int[] nums, int ka) {
        int res = 0 ;
        int prev = 0 ;
        HashMap<Integer , Integer> seen = new HashMap<>() ;
        seen.put(0,1) ;

        

        for(int i = 0 ; i < nums.length ; i++){
            prev += nums[i] ;
            int k = prev - ka ;

            if(seen.containsKey(k)){
                res += seen.get(k) ;
            }

            seen.put(prev , seen.getOrDefault(prev,0) + 1);

        }

        return res ;
    }
}