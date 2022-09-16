class Solution {
public:
    vector<vector<int> > dp;
    int maximumScore(vector<int>& nums, vector<int>& mul) {
        int n = nums.size();
        int m = mul.size();
        dp.resize(1001,vector<int>(1001,INT_MIN));
        int score = helper(nums,mul,0,n-1,0);
        return score;
    }
    int helper(vector<int>& nums, vector<int>& mul,int l,int r,int m){
        if(m>=mul.size()){
            return 0;
        }
        int s1  = nums[l]*mul[m];
        int s2 = nums[r]*mul[m];
        if(dp[l][m]==INT_MIN){
            dp[l][m] = max( helper(nums,mul,l+1,r,m+1) + s1 , helper(nums,mul,l,r-1,m+1) + s2);
        }
        return dp[l][m];
    }
};