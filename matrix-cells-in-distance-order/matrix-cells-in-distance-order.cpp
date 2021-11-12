class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int r, int c) {
        int sum=0;
        vector<vector<int>> v;
        for(int i = 0 ; i<rows ; i++){
            for(int j = 0 ; j<cols ; j++){
                v.push_back({i,j,abs(i-r)+abs(j-c)});
            }
        }
        sort(v.begin(),v.end(),[](vector<int> a,vector<int> b){
            return a[2] < b[2];
        });
        for( vector<int>& a:v){
            a.pop_back();
        }
        return v;
    }
};