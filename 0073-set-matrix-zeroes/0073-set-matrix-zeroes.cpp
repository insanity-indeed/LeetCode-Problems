class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        /*
        BRUTE FORCE APPROACH
        TIME COMPLEXITY : O(N^3)
        SPACE COMPLEXITY : O(1)
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(matrix[i][j]==0){
                    
                    for(int k = 0 ; k < row ; k++){
                            if(matrix[k][j] !=0)
                                matrix[k][j] = -99999;
                        }
                    for(int k = 0 ; k < col ; k++){
                            if(matrix[i][k] !=0)
                                matrix[i][k] = -99999;
                        }
                }
            }
        } 
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(matrix[i][j]==-99999)
                    matrix[i][j] = 0;
            }
        }
        */

        /*
        BETTER APPROACH
        TIME COMPLEXITY -> O(2.M.N)
        SPACE COMPLEXITY -> O(M) + O(N)
        vector<int> markCol(col,0);
        vector<int> markRow(row,0);

        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(matrix[i][j] == 0){
                    markRow[i] = 1;
                    markCol[j] = 1;
                }
            }
        }
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if( markCol[j] == 1 || markRow[i] == 1){
                   matrix[i][j] = 0;
                }
            }
        } 
        */

        // OPTIMAL APPROACH
        // TIME COMPLEXITY -> O(2.M.N)
        // SPACE COMPLEXITY -> O(1)
        // vector<int> markCol(col,0) ---> matrix[0][...]
        // vector<int> markRow(row,0) ---> martix[...][0]
        int col0 = 1;
for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
        if(matrix[i][j] == 0) {
            matrix[i][0] = 0;  // Mark row
            if(j != 0)
                matrix[0][j] = 0;  // Mark column
            else
                col0 = 0;  // First column needs to be zeroed
        }
    }
}

// Traverse from (1,1) to avoid overwriting markers
for(int i = 1; i < row; i++) {
    for(int j = 1; j < col; j++) {
        if(matrix[i][0] == 0 || matrix[0][j] == 0)
            matrix[i][j] = 0;
    }
}

// Zero out the first row if needed
if(matrix[0][0] == 0) {
    for(int j = 0; j < col; j++) {
        matrix[0][j] = 0;
    }
}

// Zero out the first column if needed
if(col0 == 0) {
    for(int i = 0; i < row; i++) {
        matrix[i][0] = 0;
    }
}


        
    }
};