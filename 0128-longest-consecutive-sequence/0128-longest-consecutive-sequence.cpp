class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)    return 0;
        unordered_set<int> s;
        for(auto it : nums){
            s.insert(it);
        }
        int longest = 1 ;
        for(auto it : s){
            if(s.find(it-1) == s.end()){
                int cnt = 1 ; 
                int x = it;
                while(s.find(x+1) != s.end()){
                    cnt++;
                    x = x+1;
                }
                longest = max(longest , cnt);
            }
        }
        return longest;
    }
};