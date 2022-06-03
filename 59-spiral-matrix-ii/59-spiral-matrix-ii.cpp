class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n));
        if (n == 0) {
            return matrix;
        }
        int row1 = 0; // initialize kia jae
        int row2 = n-1;
        int col1 = 0;
        int col2 = n-1;
        int num = 1;
        while (row1 <= row2 && col1 <= col2) {
            for (int i = col1; i <= col2; i ++) {
                matrix[row1][i] = num ++;
            }
            row1 ++;
            
            for (int i = row1; i <= row2; i ++) {
                matrix[i][col2] = num ++;
            }
            col2 --;
            
            for (int i = col2; i >= col1; i --) {
                if (row1 <= row2)
                    matrix[row2][i] = num ++;
            }
            row2 --;
            
            for (int i = row2; i >= row1; i --) {
                if (col1 <= col2)
                    matrix[i][col1] = num ++;
            }
            col1 ++;
        }
        return matrix;
    }
};