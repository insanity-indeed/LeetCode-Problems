class Solution {
private:
    int sum(vector<int>& nums, int s , int e){
        int ans = 0;
        for(int i = s ; i <= e ; i++)
            ans += nums[i];
        return ans;
    }
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size() - 1;
        vector<int> ans(n+1,0);
        for(int i = 0 ; i < nums.size() ; i++){
            if(i==0)    ans[i] = sum(nums,i+1,n);
            else    if(i==n)    ans[i] = sum(nums,0,n-1);
            else    ans[i] = abs(sum(nums,0,i-1)-sum(nums,i+1,n));
        }
        return ans;
    }
};