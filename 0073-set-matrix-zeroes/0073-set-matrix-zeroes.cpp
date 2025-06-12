class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        /*
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
        
        
    }
};