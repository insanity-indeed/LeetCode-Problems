class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size() ;
        int cols = matrix[0].size() ;
        /*for(int i = 0 ; i < rows ; i++){
            if(target >= matrix[i][0] && target <= matrix[i][cols-1]){
                for(int j = 0 ; j < cols ; j++){
                    if(target == matrix[i][j])
                        return 1 ;
                }
            }
        }
       */

        int low = 0 ; 
        int high = rows*cols - 1 ;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(matrix[mid/cols][mid%cols] == target)
                return 1;

            if(target<matrix[mid/cols][mid%cols])
                high = mid - 1 ;
            else
                low = mid + 1 ;
        }

        return 0 ; 
    }
};