class NumMatrix {
public:
    vector<vector<int>> mat;
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(); // rows 
        int m = matrix[0].size(); // columns
        mat = vector<vector<int>>(n+1,vector<int>(m+1,0)); // sizing the global vector with one extra row and col
        for(int i = 1; i<=n ; i++){
            for(int j=1 ; j<=m ; j++){ // calc sum of matrix i,j from 0,0
                mat[i][j] = mat[i-1][j]+mat[i][j-1]-mat[i-1][j-1]+ matrix[i-1][j-1]; // added two times so mat[i-1][j-1] is subtracted ones 
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        // int n = col1-col2;
        // int m = row2-row1;
        row1++;col1++;row2++;col2++; // our matrix is one row col bigger
        // for(int i = row1 ; i <= row2 ; i++){
        //     for(int j = col1 ; j<=col2 ; j++ ){
        //         sum += mat[i][j];
            
        return mat[row2][col2] - mat[row2][col1-1] - mat [row1-1][col2] + mat[row1-1][col1-1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */