class Solution {
    public String longestCommonPrefix(String[] strs) {
        String ans = "" ;
        int flag= 1 ;
        for(int i = 0 ; i < strs[0].length() ; i++){
            ans += strs[0].charAt(i) ;
            for(String str : strs){
                if(!str.startsWith(ans)){
                    flag = -1 ;
                    break ;
                }
            }
            if(flag == -1){
                ans = ans.substring(0,ans.length() - 1) ;
                break;
            }

        }
        return ans ;
    }
}