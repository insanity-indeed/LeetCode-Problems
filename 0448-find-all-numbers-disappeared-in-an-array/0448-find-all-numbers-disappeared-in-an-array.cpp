class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missing;
        vector<int> temp(nums.size(),0);
        for(int i = 0 ; i < nums.size() ; i++){
            temp[nums[i]-1]++;
        }  
        for(int i = 0 ; i < nums.size() ; i++){
            if(temp[i] == 0)
                missing.push_back(i+1);
        }
        return missing;  
    }
};