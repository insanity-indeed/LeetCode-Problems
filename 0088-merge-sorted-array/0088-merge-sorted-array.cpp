class Solution {
private:
    void swapIfGreater(vector<int>& nums1, int ind1, vector<int>& nums2, int ind2) {
        if (nums1[ind1] > nums2[ind2]) {
            swap(nums1[ind1], nums2[ind2]);
        }
    }
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = m + n;
        int gap = (len / 2) + (len % 2);

        while (gap > 0) {
            int left = 0;
            int right = left + gap;

            while (right < len) {
                if (left < m && right < m) {
                    // both in nums1
                    swapIfGreater(nums1, left, nums1, right);
                }
                else if (left < m && right >= m) {
                    // left in nums1 and right in nums2
                    swapIfGreater(nums1, left, nums2, right - m);
                }
                else {
                    // both in nums2
                    swapIfGreater(nums2, left - m, nums2, right - m);
                }
                left++;
                right++;
            }

            if (gap == 1) break;

            gap = (gap / 2) + (gap % 2); // Correct gap update
        }

        // Copy nums2 to nums1
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};
