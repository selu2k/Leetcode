class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        //simple lcs approach
        int n = nums1.size();
        int m = nums2.size();
        int res =0;
        vector<vector<int>>store(n+1,vector<int>(m+1)); // intialise
    
        for(int i = 1 ; i<=n ; i++){
            for(int j = 1 ; j<=m ; j++){
                if(nums1[i-1] == nums2[j-1]){
                    // store[i][j] = max(store[i-1][j-1]+1,max(store[i-1][j],store[i][j-1]));
                    //diagonal sum i.e last was also same
                    store[i][j] = store[i-1][j-1]+1;
                }
                else{
                    store[i][j] = 0;
                    // store[i][j] = max(store[i-1][j],store[i][j-1]);
                }
                res = max(res,store[i][j]);
            }
        }
        // return store[n][m];
        return res;
    }
};