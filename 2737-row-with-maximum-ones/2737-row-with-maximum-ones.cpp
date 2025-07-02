class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int row = 0 , max = 0;
        int rows = mat.size() ;
        int cols = mat[0].size() ;

        for(int i = 0 ; i < rows ; i++){
            int cnt = 0;
            for(int j = 0 ; j < cols ; j++){
                if(mat[i][j]==1)
                    cnt++;
            }
            if(cnt>max){
                row = i ;
                max = cnt;
            }
        }       
        return {row,max};
    }
};