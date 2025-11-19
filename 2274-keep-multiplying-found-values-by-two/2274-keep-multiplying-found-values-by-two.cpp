class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> st ;
        for(int num : nums)
            st.insert(num) ;
        while(st.contains(original))
            original *= 2 ;
        
        return original ;
    }
};