class Solution {
    public int countOdds(int low, int high) {
        int cnt = high - low + 1 ;

        if(cnt % 2 == 0)
            return cnt / 2 ;
        else{
            if(low % 2 == 0)
                return cnt/ 2 ;
            else
                return cnt / 2 + 1;    
        }

    }
}