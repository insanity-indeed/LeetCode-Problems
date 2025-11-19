class Solution {
    public List<String> buildArray(int[] target, int n) {
        ArrayList<String> ans = new ArrayList<>() ;
        int ind = 0 ;

        for(int i = 1 ; i <= n && ind < target.length ; i++){
            ans.add("Push");
            if(i == target[ind])    ind++ ;
            else    ans.add("Pop");
        }

        return ans ;
    }
}