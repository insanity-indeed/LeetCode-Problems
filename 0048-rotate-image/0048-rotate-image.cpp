class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
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
    }
};