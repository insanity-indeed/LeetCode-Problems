class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowStart = 0, rowEnd = matrix.size() - 1;
        int colStart = 0, colEnd = matrix[0].size() - 1;
        vector<int> ans;

        while (rowStart <= rowEnd && colStart <= colEnd) {
            // Traverse Right
            for (int i = colStart; i <= colEnd; i++) {
                ans.push_back(matrix[rowStart][i]);
            }
            rowStart++;

            // Traverse Down
            for (int i = rowStart; i <= rowEnd; i++) {
                ans.push_back(matrix[i][colEnd]);
            }
            colEnd--;

            // Traverse Left
            if (rowStart <= rowEnd) { // Check if there's a row left
                for (int i = colEnd; i >= colStart; i--) {
                    ans.push_back(matrix[rowEnd][i]);
                }
                rowEnd--;
            }

            // Traverse Up
            if (colStart <= colEnd) { // Check if there's a column left
                for (int i = rowEnd; i >= rowStart; i--) {
                    ans.push_back(matrix[i][colStart]);
                }
                colStart++;
            }
        }
        return ans;
    }
};