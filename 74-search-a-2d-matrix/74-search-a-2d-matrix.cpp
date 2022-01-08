class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row = 0;
        int m = mat.size();
        int n = mat[0].size();
        while(target>mat[row][n-1]){
            row++;
            if(row>=m) return false;
        }
        
        if(find(mat[row].begin(),mat[row].end(),target)!=mat[row].end()){
            return true;
        }
        return false;
    }
};