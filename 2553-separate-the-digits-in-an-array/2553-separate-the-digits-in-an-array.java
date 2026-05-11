class Solution {
    public int[] separateDigits(int[] nums) {
        String st = "" ;
        for(int num : nums){
            st += num ;
        }
        int[] ans = new int[st.length()] ;

        for(int i = 0 ; i < st.length() ; i++){
            ans[i] = st.charAt(i) - '0' ;
        }
        return ans ;
    }
}