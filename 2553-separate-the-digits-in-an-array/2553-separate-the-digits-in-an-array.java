class Solution {
    public int[] separateDigits(int[] nums) {
        ArrayList<Integer> arr = new ArrayList<>() ;
        for(int num : nums){
            Stack<Integer> st = new Stack<>() ;
            while(num > 0){
                st.add(num%10) ;
                num /= 10 ;
            }
            while(!st.empty()){
                arr.add(st.pop());
            }
        }
        int[] ans = new int[arr.size()] ;

        for(int i = 0 ; i < arr.size() ; i++){
            ans[i] = arr.get(i) ;
        }
        return ans ;
    }
}