class Solution {
public:
    
    // Find first occurrence
    int binarySearchFirst(vector<int>& nums, int target) {
        int s = 0, l = nums.size() - 1, index = -1;
        while (s <= l) {
            int mid = (s + l) / 2;
            if (nums[mid] == target) {
                index = mid;       // Possible first occurrence
                l = mid - 1;       // Look on the left side
            }
            else if (nums[mid] < target) {
                s = mid + 1;
            }
            else {
                l = mid - 1;
            }
        }
        return index;
    }

    // Find last occurrence
    int binarySearchLast(vector<int>& nums, int target) {
        int s = 0, l = nums.size() - 1, index = -1;
        while (s <= l) {
            int mid = (s + l) / 2;
            if (nums[mid] == target) {
                index = mid;       // Possible last occurrence
                s = mid + 1;       // Look on the right side
            }
            else if (nums[mid] < target) {
                s = mid + 1;
            }
            else {
                l = mid - 1;
            }
        }
        return index;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first = binarySearchFirst(nums, target);
        int last = binarySearchLast(nums, target);
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};

