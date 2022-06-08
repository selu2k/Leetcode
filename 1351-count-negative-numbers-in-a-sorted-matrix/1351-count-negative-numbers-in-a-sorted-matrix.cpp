class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        for(int i = 0 ; i<n ; i++){
            int l =0 ;
            int r = m-1;
            int mid;
            int cur=m;
            while(l<=r){
                mid = l + (r-l)/2;
                if(grid[i][mid]<0){
                    cur = mid;
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            ans = ans + (m - cur);
        }
        return ans;
    }
};