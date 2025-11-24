class Solution {
    public List<Boolean> prefixesDivBy5(int[] nums) {
        List<Boolean> ans = new ArrayList<>() ;
        int num = 0 ;
        for(int i : nums){
            num = (2 * num + i) % 5 ;
            if(num == 0)
                ans.add(true);
            else
                ans.add(false) ;
        }
        return ans ;
    }
}