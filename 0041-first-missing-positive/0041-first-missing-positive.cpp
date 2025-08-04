class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        /*map<int,int> mpp;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]>0)
                mpp[nums[i]]++;
        }
        for(int i = 1 ; i <= nums.size(); i++){
            if(mpp.find(i) == mpp.end())
                return i ;
        }
        return nums.size() + 1;*/
        int n = nums.size();
vector<int> freq(n + 1, 0);

for (int i = 0; i < n; i++) {
    if (nums[i] > 0 && nums[i] <= n)
        freq[nums[i]] = 1;
}

for (int i = 1; i <= n; i++) {
    if (freq[i] == 0)
        return i;
}

return n + 1;
    }
};