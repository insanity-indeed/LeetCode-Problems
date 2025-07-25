class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        /*
        int row = mat.size() ;
        int col = mat[0].size() ;
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                int el = mat[i][j];
                bool up = (i==0) || (el>mat[i-1][j]);
                bool down = (i==row-1) || (el>mat[i+1][j]);
                bool left = (j==0) || (el>mat[i][j-1]);
                bool right = (j==col-1) || (el>mat[i][j+1]);    
                if(up && down && left && right)
                    return {i,j};       
            }
        }
        return {-1,-1};
        */
        //Using lenear search
        int max = -1 ;
        vector<vector<int>> Index ;
        int row = mat.size() ;
        int col = mat[0].size() ;
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(max<mat[i][j]){
                    max = mat[i][j];
                }
            }
        }
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(max==mat[i][j]){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};