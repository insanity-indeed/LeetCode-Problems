class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 ;
        int high = *max_element(piles.begin(),piles.end());
        int ans = -1 ;
        while(low <= high){
            int mid = low + (high - low)/2 ;
            double sum = 0 ;

            for (int i = 0; i < piles.size(); i++) {
                if (piles[i] % mid == 0) {
                    sum += piles[i] / mid;
                } else {
                    sum += piles[i] / mid + 1;
                }
            }



            if(sum <= h){
                ans = mid;
                high = mid - 1 ;
            }           
            else{
                low = mid + 1 ; 
            }

        }
        return ans ;
    }
};