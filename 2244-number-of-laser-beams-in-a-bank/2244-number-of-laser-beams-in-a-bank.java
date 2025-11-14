class Solution {
    public int findOnes(String str){
        int cnt = 0 ;
        for(int i = 0 ; i < str.length() ; i++){
            if(str.charAt(i) == '1')    cnt++ ;
        }
        return cnt ;
    }
    public int numberOfBeams(String[] bank) {
        int len = bank.length ;
        int[] check = new int[len] ;
        for(int i = 0 ; i < len ; i++) {
            check[i] = findOnes(bank[i]);   
        }
        int prev = check[0] ;
        int ans = 0 ;
        for(int i = 1 ; i < len ; i++){
            if(check[i] > 0){
                ans += check[i] * prev ;
                prev = check[i] ;
            }
        }
        return ans;
    }
}