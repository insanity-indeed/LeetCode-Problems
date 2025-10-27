class Solution {
    // "Find the longest continuous sub array that has exactly 2 distinct elements."
    public int totalFruit(int[] fruits) {
        int left = 0 ;
        int right  = 0 ;
        int fruit = 0 ;
        int len = 0 ;
        int maxLen = 0 ;
        HashMap<Integer , Integer> seen = new HashMap<>() ;

        while(right < fruits.length){
           
            seen.put(fruits[right] , seen.getOrDefault(fruits[right],0) + 1) ;
            
            if(seen.size() > 2){
                seen.put(fruits[left] , seen.get(fruits[left]) - 1) ;
                if(seen.get(fruits[left]) == 0)
                    seen.remove(fruits[left]) ;
                left++ ;
            }

            maxLen = Math.max(maxLen , right - left + 1);
            right++ ;
        }

        return maxLen ;
    }
}