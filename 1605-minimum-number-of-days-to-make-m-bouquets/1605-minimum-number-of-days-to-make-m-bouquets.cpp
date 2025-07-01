class Solution {
public:
    bool possible(vector<int>& bloomDay , int num ,int m,int k){
        int cnt = 0 ;
        int ans = 0 ;
        for(int i = 0 ; i < bloomDay.size() ; i++){
            if(bloomDay[i]<=num)
                cnt++;
            else{
                ans += cnt/k;
                cnt = 0 ;
            }
        }
        ans += cnt/k;       
        return (ans>=m) ;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(m > bloomDay.size()/k)   return -1 ;
        int ans = -1;
        
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        
        while(low <= high){
            int mid = low + (high - low)/2;

            if(possible(bloomDay,mid,m,k)==1){
                ans =  mid;
                high = mid - 1 ; 
            }
            else
                low = mid + 1 ;

        }



        return ans;
    }
};