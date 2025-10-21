class Solution {

    public void rotate(int[][] matrix) {
        int col = matrix[0].length ;
        int row = matrix.length ;
        for(int i = 0 ; i < row ; i++){
            for(int j = i+1 ; j < col ; j++){
                int temp = matrix[i][j] ;
                matrix[i][j] = matrix[j][i] ;
                matrix[j][i] = temp ;
            }
        }
        for (int i = 0; i < row; i++) {
    int left = 0, right = matrix[i].length - 1;
    while (left < right) {
        int temp = matrix[i][left];
        matrix[i][left] = matrix[i][right];
        matrix[i][right] = temp;
        left++;
        right--;
    }
}
    }
}