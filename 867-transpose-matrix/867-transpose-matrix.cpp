class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>ans;
        vector<int>t;
        int n = matrix.size();
        int m= matrix[0].size();
        for(int i =0 ; i<m;i++){
            for(int j = 0; j<n;j++){
                t.push_back(matrix[j][i]);
            }
            ans.push_back(t);
            t.clear();
        }
        return ans;
    }
};