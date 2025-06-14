class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<float> f ;
        sort(nums.begin(),nums.end());
        int s = 0 , e = nums.size() -1 ;
        while(s<e){
            float tem = (float)(nums[s]+nums[e])/2;
            f.push_back(tem);
            s++;
            e--;
        }
        sort(f.begin(),f.end());
        return f[0];
    }
};