class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int i = 0;
        while(i<row && col-1>=0){
            if(matrix[i][col-1]==target){
                return true;
            }
            else if( matrix[i][col-1] > target){
                col--;
            }
            else if( matrix[i][col-1] < target){
                i++;
            }
        }
        return false;
    }
};