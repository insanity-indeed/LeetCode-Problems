class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0 , el;
        for( int i = 0 ; i < nums.size() ; i++ ){
            if(cnt == 0)
                el = nums[i];
            
            if(el == nums[i])
                cnt++;
            else
                cnt--;
        }
        cnt = 0;
        for(auto i : nums){
            if(i == el)
                cnt++;
        }

        if(cnt > nums.size()/2)
            return el;
        else
            return -1;
    }
};