class Solution {
public:
    double average(vector<int>& salary) {
        double ans = 0;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int i  = 0 ;
        for( ; i < salary.size() ; i++){
            ans += salary[i];

            mini = min(mini,salary[i]);
            maxi = max(maxi,salary[i]); 
        }        

        ans = ans - mini - maxi;
        return ans / (i - 2) ;  
    }
};