class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count = 0;
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<int>> v(r+2,vector<int>(c+2,0));
        
        for(int i = 0 ; i<r ;i++){
            for(int j = 0 ; j<c;j++){
                v[i+1][j+1]=grid[i][j];
            }
        }
        for(int i = 1 ; i<=r ;i++){
            for(int j = 1 ; j<=c;j++){
                if(v[i][j]==1){
                    if(v[i-1][j]==0){count++;}
                    if(v[i+1][j]==0){count++;}
                    if(v[i][j+1]==0){count++;}
                    if(v[i][j-1]==0){count++;}
                }
            }
        }
        
        return count;
    }
};