class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());

        for (int i = 0; i < intervals.size(); i++) {
            // If ans is empty OR current interval doesn't overlap with the last interval in ans
            if (ans.empty() || ans.back()[1] < intervals[i][0]) {
                ans.push_back(intervals[i]);
            } else {
            // There is overlap, so we merge the current interval with the last interval in ans
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }
};