class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int> s ;
        for(auto i : nums){
            s.insert(i);
        }  
        int sum = 0 ; 
        for(auto i : s){
            if(i>=0)
                sum += i ;
        }  
        if(*max_element(s.begin(),s.end())<0)   
            return *max_element(s.begin(),s.end());
        else
            return sum;
    }
};