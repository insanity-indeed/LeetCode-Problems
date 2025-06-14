class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> v;
        vector<int> heap(nums.size(),0);
        for(int i = 0 ; i < nums.size() ; i++){
            heap[nums[i]]++;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(heap[i]==2)
                v.push_back(i);
        }
        return v;
    }
};