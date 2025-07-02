class Solution {
public:
    int maxProfit(vector<int>& prices) {
      
        int maxi = 0, mini = prices[0];
        for( int i = 1 ; i < prices.size() ; i++ ){
            int cost = prices[i] - mini;
            maxi = max(maxi,cost);
            mini = min(prices[i],mini);
        }
        return maxi;
    }
};