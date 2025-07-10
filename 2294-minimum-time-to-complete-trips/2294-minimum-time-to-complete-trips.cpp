class Solution {
public:
    long long int trips(vector<int>& time , long long int mid){
        long long int trip = 0 ;
        for(int i = 0 ; i < time.size() ; i++){
            trip += mid/time[i] ;
        }
        return trip ;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long int low = 1 ;
        long long int high = 1e14 ;

        while(low<high){
            long long int mid = low + (high-low)/2;
            long long int trip = trips(time,mid);
            if(trip>=totalTrips){
                high = mid;
            }
            else
                low = mid + 1 ;       
        }
        return low;
    }
};