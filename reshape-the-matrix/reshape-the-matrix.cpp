class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> v(r,vector<int>(c));
        if(n*m != r*c){return mat;}
        vector<int> temp;
        for(int i = 0;i<n ;i++){
            for(int j =0 ;j<m;j++){
                temp.push_back(mat[i][j]);
            }
        }
        int x = 0;
        for(int i = 0;i<r ;i++){
            for(int j =0 ;j<c;j++){
                v[i][j] = temp[x];
                x++;
            }
        }
        return v;
    }
};