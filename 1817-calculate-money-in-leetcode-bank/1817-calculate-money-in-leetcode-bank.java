class Solution {
    public int totalMoney(int n) {
        int cnt = 0 ;
        int sum = 0 ;
        int normal = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(i % 7 == 0){
                cnt++ ;
                sum += cnt ;
                normal = cnt ;
            }else{
                normal++;
                sum += normal ;
            }

        } 
        return sum ;
    }
}