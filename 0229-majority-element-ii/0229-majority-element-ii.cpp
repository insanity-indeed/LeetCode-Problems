class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        /*
        BRUTE FORCE APPROACH
        Time Complexity: O(nlogn)
        Space Complexity: O(n)
        map<int,int> mpp;
        int minOcc = n / 3 + 1 ;
        for(int i = 0 ; i < n ; i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] == minOcc)
                res.push_back(nums[i]);
            if(res.size()==2)   
                break;
        }*/
        int n = nums.size();
        vector<int> res;
        int num1 = -1 , count1 = 0;
        int num2 = -1 , count2 = 0;
        for(int i = 0 ; i < n ; i ++){
            if(count1 == 0 && num2 != nums[i]){
                num1 = nums[i];
                count1++;
            }
            else if(count2 == 0 && num1 != nums[i]){
                num2 = nums[i];
                count2++;
            }
            else if(nums[i] == num1){
                count1++;
            } 
            else if(nums[i] == num2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        int cnt1 = 0, cnt2 = 0;
for (auto it : nums) {
    if (it == num1) cnt1++;
    else if (it == num2) cnt2++; // Only need to check remaining ones
}

if (cnt1 > n / 3) res.push_back(num1);
if (cnt2 > n / 3) res.push_back(num2);
        return res;
    
    }
};