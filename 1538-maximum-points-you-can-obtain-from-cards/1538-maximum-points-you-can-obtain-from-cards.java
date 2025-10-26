class Solution {
    public int maxScore(int[] cardPoints, int k) {
        int lSum = 0 ;
        int rSum = 0 ;
        for(int i = 0 ; i < k ; i++)    lSum += cardPoints[i] ;
        int n = cardPoints.length - 1 ;
        int maxSum = lSum ;
        //int n = cardPoints.length ;
        while(k > 0){
            lSum -= cardPoints[k-1] ;
            rSum += cardPoints[n--] ; 
            maxSum = Math.max(maxSum, lSum + rSum);
            k-- ;
        }
        return maxSum ;
    }
}