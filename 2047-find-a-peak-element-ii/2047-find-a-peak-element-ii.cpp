class Solution {
public:
    int Maximum(vector<vector<int>>& mat,int mid){
        int maxi = -1 , index = -1 ;
        for(int i = 0 ; i  < mat.size() ; i++){
            if(maxi<mat[i][mid]){
                maxi = mat[i][mid];
                index = i ;
            }
        }
        return index ;
    }
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
        /*int max = -1 ;
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
        }*/
        int row = mat.size() ;
        int col = mat[0].size();
        int low = 0 ;
        int high = col - 1 ;
        while(low <= high){
            int mid = low + (high - low)/2 ;
            int maxIndex = Maximum(mat,mid);
            int left = mid - 1 >= 0 ? mat[maxIndex][mid-1] : -1 ;
            int right = mid + 1 < col  ? mat[maxIndex][mid+1] : -1 ;

            if(mat[maxIndex][mid]>left && mat[maxIndex][mid] > right)
                return {maxIndex,mid} ;
            else if(mat[maxIndex][mid]<left )
                high = mid - 1 ;
            else
                low = mid + 1 ;
        }
        return {-1,-1};
    }
};