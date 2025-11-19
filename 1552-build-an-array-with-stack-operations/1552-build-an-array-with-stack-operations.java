class Solution {
    public List<String> buildArray(int[] target, int n) {
        ArrayList<String> ans = new ArrayList<>() ;
        Stack<Integer> st = new Stack<>() ;
        int ind = 0 ;

        for(int i = 1 ; i <= n ; i++){
            if(i == target[ind]){
                ans.add("Push");
                ind++ ;
            }
            else{
                ans.add("Push");
                ans.add("Pop");
            }

            if(target[target.length - 1] == i)  break;
        }

        return ans ;
    }
}