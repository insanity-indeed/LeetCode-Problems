class Solution {
    public int maxProfit(int[] prices) {
        int maxSum = 0 ;
        int stockA = prices[0] ;
        for(int i = 1 ; i < prices.length ; i++){
            if( prices[i] - stockA < 0){
                stockA = prices[i] ;
            } 
            else{
                maxSum = Math.max(maxSum,prices[i]-stockA);
            }

        }
        return maxSum ;
    }
}