class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        /*
        BRUTE FORCE Approach
        Time Complexity : 2xO(m*n)
        Space Complexity : O(m*n)  
        vector<int> temp;
        int row = matrix.size() , col = matrix[0].size();
        int trow = matrix.size() , tcol = matrix[0].size();
        for(int j = 0 ; j < col ; j++){
            for(int i = row - 1; i >= 0 ; i--){
                temp.push_back(matrix[i][j]);
            }
        }
        int s = 0;
        for(int i = 0; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                matrix[i][j] = temp[s];
                s++;
            }
        } 
        */   
        //Transpose the given matrix
        int n = matrix.size();
        for(int i = 0; i < n; ++i){
            for(int j = i + 1; j < n; ++j){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse each row
        for(int i = 0; i < n; ++i){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};