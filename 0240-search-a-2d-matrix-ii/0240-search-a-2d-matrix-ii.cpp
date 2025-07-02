class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size() ;
        int cols = matrix[0].size() ;
        
        for(int j = 0 ; j < cols ; j++){
            if(target >= matrix[0][j] && target <= matrix[rows-1][j]){
                for(int i = 0 ; i < rows ; i++){
                    if(target == matrix[i][j])
                        return 1 ;
                }
            }
        }
        return 0 ;

    }  
    
};