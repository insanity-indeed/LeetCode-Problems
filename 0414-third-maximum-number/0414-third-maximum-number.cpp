class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long m1 = LONG_MIN;
        long m2 = LONG_MIN;
        long m3 = LONG_MIN;   

        for(int i : nums){
            if(m1 == i || m2 == i || m3 == i)
                continue ;
            
            if(i > m1){
                m3 = m2 ;
                m2 = m1 ;
                m1 = i ;
            }
            else if(i>m2){
                m3 = m2 ;
                m2 = i ;
            }
            else if(i > m3){
                m3 = i ;
            }
        }
        return m3 == LONG_MIN ? m1 : m3 ;

    }
};