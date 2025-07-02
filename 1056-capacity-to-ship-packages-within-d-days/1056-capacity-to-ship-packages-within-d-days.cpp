class Solution {
public:
    int daysNeed(vector<int>& weights,int load){
        int days = 1 , curr = 0 ;
        for(int i = 0 ; i < weights.size() ; i++){
            if(curr + weights[i] > load){
                days++;
                curr = weights[i];
            }
            else
                curr += weights[i];
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0); 
        int ans = -1 ;
        while(low<=high){
            int mid = low + (high - low)/2;
            int day = daysNeed(weights,mid);
            if(day<=days){
                ans = mid;
                high = mid - 1 ; 
            }

            if(day>days)
                low = mid + 1;
            else
                high = mid - 1 ;
        }
        return ans ;
    }
};